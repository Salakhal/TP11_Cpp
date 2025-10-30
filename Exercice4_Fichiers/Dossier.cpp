#include "Dossier.hpp"
#include <iostream>
using namespace std;

Dossier::Dossier(std::string nom) : _nom(nom) {}

std::string Dossier::nom() const { return _nom; }

int Dossier::taille() const {
    int total = 0;
    for (const auto& n : enfants) total += n->taille();
    return total;
}

void Dossier::ajouter(std::unique_ptr<NoeudFichier> n) {
    enfants.push_back(move(n));
}

void Dossier::afficherContenu(int indent) const {
    string espace(indent, ' ');
    cout << espace << _nom << " (Dossier, taille=" << taille() << ")\n";
    for (const auto& n : enfants) {
        if (auto d = dynamic_cast<Dossier*>(n.get())) {
            d->afficherContenu(indent + 4);
        } else {
            cout << string(indent+4,' ') << n->nom() << " (Fichier, taille=" << n->taille() << ")\n";
        }
    }
}

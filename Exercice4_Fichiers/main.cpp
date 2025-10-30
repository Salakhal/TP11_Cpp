#include <iostream>
#include <memory>
#include "Fichier.hpp"
#include "Dossier.hpp"
using namespace std;

int main() {
    auto root = make_unique<Dossier>("root");

    root->ajouter(make_unique<Fichier>("file1.txt", 100));
    root->ajouter(make_unique<Fichier>("file2.txt", 250));

    auto docs = make_unique<Dossier>("docs");
    docs->ajouter(make_unique<Fichier>("doc1.pdf", 500));
    docs->ajouter(make_unique<Fichier>("doc2.pdf", 300));

    root->ajouter(move(docs));

    cout << "Structure des fichiers :\n";
    root->afficherContenu();

    cout << "\nTaille totale du dossier root : " << root->taille() << " octets\n";

    return 0;
}

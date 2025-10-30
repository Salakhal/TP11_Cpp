#pragma once
#include "NoeudFichier.hpp"
#include <vector>
#include <memory>
#include <string>
class Dossier : public NoeudFichier {
private:
    std::string _nom;
    std::vector<std::unique_ptr<NoeudFichier>> enfants;
public:
    Dossier(std::string nom);
    std::string nom() const override;
    int taille() const override;
    void ajouter(std::unique_ptr<NoeudFichier> n);
    void afficherContenu(int indent=0) const;
};

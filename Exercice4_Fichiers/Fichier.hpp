#pragma once
#include "NoeudFichier.hpp"
#include <string>
class Fichier : public NoeudFichier {
private:
    std::string _nom;
    int _taille;
public:
    Fichier(std::string nom, int taille);
    std::string nom() const override;
    int taille() const override;
};

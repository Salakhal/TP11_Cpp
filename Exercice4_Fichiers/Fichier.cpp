#include "Fichier.hpp"
Fichier::Fichier(std::string nom, int taille) : _nom(nom), _taille(taille) {}
std::string Fichier::nom() const { return _nom; }
int Fichier::taille() const { return _taille; }

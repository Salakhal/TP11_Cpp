#pragma once
#include "Forme.hpp"

class Rectangle : public Forme {
private:
    double longueur, largeur;
public:
    Rectangle(double l, double L) : longueur(l), largeur(L) {}
    double aire() const override;
};

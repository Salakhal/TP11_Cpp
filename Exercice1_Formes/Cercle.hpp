#pragma once
#include "Forme.hpp"

class Cercle : public Forme {
private:
    double rayon;
public:
    Cercle(double r) : rayon(r) {}
    double aire() const override;
};

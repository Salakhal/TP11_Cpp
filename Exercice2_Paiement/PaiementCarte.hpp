#pragma once
#include "Paiement.hpp"
#include <iostream>
class PaiementCarte : public Paiement {
public:
    void effectuerPaiement(double montant) const override;
};

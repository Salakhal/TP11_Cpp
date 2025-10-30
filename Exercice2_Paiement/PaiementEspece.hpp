#pragma once
#include "Paiement.hpp"
#include <iostream>
class PaiementEspece : public Paiement {
public:
    void effectuerPaiement(double montant) const override;
};

#pragma once
class Paiement {
public:
    virtual void effectuerPaiement(double montant) const = 0;
    virtual ~Paiement() {}
};

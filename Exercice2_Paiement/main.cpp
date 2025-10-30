#include <iostream>
#include <vector>
#include <memory>
#include "PaiementCarte.hpp"
#include "PaiementEspece.hpp"
using namespace std;

int main() {
    vector<unique_ptr<Paiement>> paiements;

    paiements.push_back(make_unique<PaiementCarte>());
    paiements.push_back(make_unique<PaiementEspece>());
    paiements.push_back(make_unique<PaiementCarte>());

    vector<double> montants = {150.0, 200.0, 75.5};

    for (size_t i = 0; i < paiements.size(); i++) {
        paiements[i]->effectuerPaiement(montants[i]);
    }

    return 0;
}

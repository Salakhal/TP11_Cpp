#include "PaiementEspece.hpp"
#include <iostream>
using namespace std;

void PaiementEspece::effectuerPaiement(double montant) const {
    cout << "Paiement de " << montant << " DH en espèces." << endl;
}

#include <iostream>
#include <vector>
#include <memory>
#include "Cercle.hpp"
#include "Rectangle.hpp"
using namespace std;

int main() {
    int n;
    cout << "Combien de formes voulez-vous créer ? ";
    cin >> n;

    vector<unique_ptr<Forme>> formes;

    for (int i = 0; i < n; i++) {
        int choix;
        cout << "\nForme #" << i+1 << " (1=Cercle, 2=Rectangle) : ";
        cin >> choix;

        if (choix == 1) {
            double r;
            cout << "Entrez le rayon : ";
            cin >> r;
            formes.push_back(make_unique<Cercle>(r));
        } else if (choix == 2) {
            double l, L;
            cout << "Entrez longueur et largeur : ";
            cin >> l >> L;
            formes.push_back(make_unique<Rectangle>(l, L));
        } else {
            cout << "Choix invalide, forme ignorée.\n";
            i--;
        }
    }

    cout << "\nAires des formes :\n";
    for (size_t i = 0; i < formes.size(); i++) {
        cout << "Forme #" << i+1 << " : " << formes[i]->aire() << endl;
    }

    return 0;
}

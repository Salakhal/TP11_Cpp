#include <iostream>
#include <vector>
#include <memory>
#include "Chien.hpp"
#include "Chat.hpp"
#include "Vache.hpp"
using namespace std;

int main() {
    vector<unique_ptr<Animal>> animaux;

    animaux.push_back(make_unique<Chien>());
    animaux.push_back(make_unique<Chat>());
    animaux.push_back(make_unique<Vache>());

    for (size_t i = 0; i < animaux.size(); i++) {
        animaux[i]->info();
        animaux[i]->crier();
        cout << endl;
    }

    return 0;
}

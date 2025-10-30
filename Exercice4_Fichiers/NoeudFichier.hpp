#pragma once
#include <string>
class NoeudFichier {
public:
    virtual std::string nom() const = 0;
    virtual int taille() const = 0;
    virtual ~NoeudFichier() {}
};

#pragma once
#include "Animal.hpp"
class Chat : public Animal {
public:
    void crier() const override;
};

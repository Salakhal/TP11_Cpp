#pragma once
#include <iostream>
class Animal {
public:
    virtual void crier() const = 0;
    void info() const { std::cout << "Je suis un animal." << std::endl; }
    virtual ~Animal() {}
};

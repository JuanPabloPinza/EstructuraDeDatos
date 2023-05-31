#include <random>
#include <iostream>
#include "Operaciones.h"

int Operaciones::generarIntRnd() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, 9);
    return dist(gen);
}
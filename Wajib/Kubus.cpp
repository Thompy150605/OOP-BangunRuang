#include "Kubus.hpp"

Kubus::Kubus(double sisi) : sisi(sisi) {} // Konstruktor
Kubus::~Kubus() {} // Destruktor

double Kubus::getVolume() const { // Rumus Volume Kubus
    return sisi * sisi * sisi;
}

double Kubus::getSurfaceArea() const { // Rumus Luas Permukaan Kubus
    return 6 * sisi * sisi;
}

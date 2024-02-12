#include "Kubus.hpp"

Kubus::Kubus(double sisi) : BangunRuang("Balok", 6, 12), sisi(sisi) {} // Konstruktor
Kubus::~Kubus() {} // Destruktor

double Kubus::getVolume() const {
    return sisi * sisi * sisi;
}

double Kubus::getSurfaceArea() const {
    return 6 * sisi * sisi;
}

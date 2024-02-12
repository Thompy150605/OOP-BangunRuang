#include "Silinder.hpp"

Silinder::Silinder(double r, double h) : radius(r), tinggi(h) {} // Konstruktor
Silinder::~Silinder() {} // Destruktor

double Silinder::getVolume() const { // Rumus Volume Tabung
    return PI*radius*radius*tinggi;
}

double Silinder::getSurfaceArea() const { // Rumus Luas Permukaan Tabung
    return 2*PI*radius*(radius + tinggi);
}
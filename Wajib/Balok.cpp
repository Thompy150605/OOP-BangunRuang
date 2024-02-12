#include "Balok.hpp"

Balok::Balok(double p, double l, double t) : panjang(p), lebar(l), tinggi(t) {} // Konstruktor
Balok::~Balok() {} // Destruktor

double Balok::getVolume() const { // Rumus Volume Balok
    return panjang * lebar * tinggi;
}

double Balok::getSurfaceArea() const { // Rumus Luas Permukaan Balok
    return 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
}

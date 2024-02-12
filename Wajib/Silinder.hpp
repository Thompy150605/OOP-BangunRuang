// SILINDER_HPP

#ifndef SILINDER_HPP
#define SILINDER_HPP
#include "BangunRuang.hpp"

#include <iostream>

class Silinder : public BangunRuang {
private:
    double radius; // Jari Jari Lingkaran
    double tinggi; // Tinggi Silinder
    const double PI = 3.14159265358979323846; // Define konstanta PI

public:
    Silinder(double r, double h); // Konstruktor
    ~Silinder(); // Destruktor

    double getVolume() const override; // Volume Kubus
    double getSurfaceArea() const override; // Luas Permukaan Kubus
};

#endif
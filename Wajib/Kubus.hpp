// KUBUS_HPP

#ifndef KUBUS_HPP
#define KUBUS_HPP
#include "BangunRuang.hpp"

class Kubus : public BangunRuang {
private:
    double sisi; // Sisi Kubus

public:
    Kubus(double sisi); // Konstruktor
    ~Kubus(); // Destruktor

    double getVolume() const override; // Menghitung Volume
    double getSurfaceArea() const override; // Menghitung Luas Permukaan
};

#endif
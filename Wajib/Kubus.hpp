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

    double getVolume() const override; // Volume Kubus
    double getSurfaceArea() const override; // Luas Permukaan Kubus
};

#endif
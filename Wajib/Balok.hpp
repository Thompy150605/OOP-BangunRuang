// BALOK HPP

#ifndef BALOK_HPP
#define BALOK_HPP

#include "BangunRuang.hpp"

class Balok : public BangunRuang {
private:
    double panjang; // Panjang Balok
    double lebar; // Lebar Balok
    double tinggi; // Tinggi Balok
public:
    Balok(double p, double l, double t);
    ~Balok();

    double getVolume() const; // Volume Balok
    double getSurfaceArea() const; // Luas Permukaan Balok
};

#endif
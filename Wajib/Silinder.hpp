// SILINDER_HPP

#ifndef SILINDER_HPP
#define SILINDER_HPP
#include "BangunRuang.hpp"

#include <iostream>

class Silinder : public BangunRuang {
private:
    double radius;
    double tinggi;
    const double PI = 3.14159265358979323846;

public:
    Silinder(double r, double h);
    ~Silinder();

    double getVolume() const override;
    double getSurfaceArea() const override;
};

#endif
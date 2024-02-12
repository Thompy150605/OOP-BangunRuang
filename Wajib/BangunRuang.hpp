// BANGUNRUANG_HPP

#ifndef BANGUNRUANG_HPP
#define BANGUNRUANG_HPP

class BangunRuang {
public:
    virtual double getVolume() const = 0; // Volume Bangun Ruang
    virtual double getSurfaceArea() const = 0; // Luas Permukaan Bangun Ruang
    virtual ~BangunRuang(); // Destruktor
};

#endif
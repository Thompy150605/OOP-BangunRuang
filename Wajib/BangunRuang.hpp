// BANGUNRUANG_HPP

#ifndef BANGUNRUANG_HPP
#define BANGUNRUANG_HPP

#include <string>

class BangunRuang {
protected:
    std::string namaBangunRuang;
    int jumlahSisi;
    int jumlahRusuk;

public:
    BangunRuang(); // Default Konstruktor
    BangunRuang(const std::string& nama, int jumlahSisi, int jumlahRusuk); // Konstruktor dengan Parameter

    // Getter
    std::string getNama() const;
    int getJumlahSisi() const;
    int getJumlahRusuk() const;

    // Virtual surface area
    virtual double getSurfaceArea() const = 0;

    // Virtual volume
    virtual double getVolume() const = 0;

    // Virtual destruktor
    virtual ~BangunRuang();
};

#endif

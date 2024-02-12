#include "BangunRuang.hpp"
#include <iostream>

// Default Konstruktor
BangunRuang::BangunRuang() : namaBangunRuang("Undefined"), jumlahSisi(0), jumlahRusuk(0) {}

// Konstruktor dengan Parameter
BangunRuang::BangunRuang(const std::string& nama, int jumlahSisi, int jumlahRusuk) : namaBangunRuang(nama), jumlahSisi(jumlahSisi), jumlahRusuk(jumlahRusuk) {}

// Virtual destruktor
BangunRuang::~BangunRuang() {}

// Getter
std::string BangunRuang::getNama() const {
    return namaBangunRuang;
}

int BangunRuang::getJumlahSisi() const {
    return jumlahSisi;
}

int BangunRuang::getJumlahRusuk() const {
    return jumlahRusuk;
}

double BangunRuang::getVolume() const {
    return 0.0; 
}

double BangunRuang::getSurfaceArea() const {
    return 0.0;
}
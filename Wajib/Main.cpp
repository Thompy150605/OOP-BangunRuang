#include "BangunRuang.hpp"
#include "Silinder.hpp"
#include "Balok.hpp"
#include "Kubus.hpp"

#include <iostream>
#include <string>
using namespace std;

int main() {
    string objectName;
    double sisi, panjang, lebar, tinggi, radius;

    cout << "=== PROGRAM MENGHITUNG BANGUN RUANG ====" << endl;
    cout << "==== PILIHAN BANGUN RUANG TERSEDIA =====" << endl;
    cout << "| Kubus (k) | Balok (b) | Silinder (s) |" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Bangun Ruang: ";
    cin >> objectName;

    /*JIKA OBJEK TIDAK DITEMUKAN*/
    while (objectName != "k" && objectName != "b" && objectName != "s") {
            cout << "Bangun Ruang Tidak Ditemukan" << endl;
            cout << "Bangun Ruang: ";
            cin >> objectName;
            cout << endl;
        }

    /*OBJEK KUBUS*/
    if (objectName == "k") {
        cout << "Sisi Kubus: ";
        cin >> sisi;
        
        Kubus kubus(sisi);
        cout << "Nama Bangun Ruang: " << kubus.getNama() << endl;
        cout << "Jumlah Sisi: " << kubus.getJumlahSisi() << endl;
        cout << "Jumlah Rusuk: " << kubus.getJumlahRusuk() << endl;
        cout << "Volume Kubus: " << kubus.getVolume() << endl;
        cout << "Luas Permukaan Kubus: " << kubus.getSurfaceArea() << endl;
    }

    /*OBJEK BALOK*/
    else if (objectName == "b") {
        cout << "Panjang Balok: ";
        cin >> panjang;
        cout << "Lebar Balok: ";
        cin >> lebar;
        cout << "Tinggi Balok: ";
        cin >> tinggi;

        Balok balok(panjang, lebar, tinggi); 
        cout << "Nama Bangun Ruang: " << balok.getNama() << endl;
        cout << "Jumlah Sisi: " << balok.getJumlahSisi() << endl;
        cout << "Jumlah Rusuk: " << balok.getJumlahRusuk() << endl;
        cout << "Volume Balok: " << balok.getVolume() << endl;
        cout << "Luas Permukaan Balok: " << balok.getSurfaceArea() << endl;
    }

    /*OBJEK SILINDER*/
    else if (objectName == "s") {
        cout << "Radius Silinder: ";
        cin >> radius;
        cout << "Tinggi Silinder: ";
        cin >> tinggi;

        Silinder silinder(radius, tinggi);
        cout << "Nama Bangun Ruang: " << silinder.getNama() << endl;
        cout << "Jumlah Sisi: " << silinder.getJumlahSisi() << endl;
        cout << "Jumlah Rusuk: " << silinder.getJumlahRusuk() << endl;
        cout << "Volume Silinder: " << silinder.getVolume() << endl;
        cout << "Luas Permukaan Silinder: " << silinder.getSurfaceArea() << endl;
    }
}
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

    cout << "PROGRAM MENGHITUNG BANGUN RUANG" << endl;
    cout << " PILIHAN BANGUN RUANG TERSEDIA" << endl;
    cout << " |  Kubus | Balok | Silinder  |" << endl;
    cout << "-----------------------------" << endl;
    cout << "Bangun Ruang: ";
    cin >> objectName;

    /*OBJEK KUBUS*/
    if (objectName == "Kubus") {
        cout << "Sisi Kubus:";
        cin >> sisi;
        
        Kubus kubus(sisi);
        cout << "Volume Kubus: " << kubus.getVolume() << endl;
        cout << "Luas Permukaan Kubus: " << kubus.getSurfaceArea() << endl;
    }

    /*OBJEK BALOK*/
    else if (objectName == "Balok") {
        cout << "Panjang Balok: ";
        cin >> panjang;
        cout << "Lebar Balok: ";
        cin >> lebar;
        cout << "Tinggi Balok: ";
        cin >> tinggi;

        Balok balok(panjang, lebar, tinggi); 
        cout << "Volume Balok: " << balok.getVolume() << std::endl;
        cout << "Luas Permukaan Balok: " << balok.getSurfaceArea() << std::endl;
    }

    /*OBJEK SILINDER*/
    else if (objectName == "Silinder") {
        cout << "Radius Silinder: ";
        cin >> radius;
        cout << "Tinggi Silinder: ";
        cin >> tinggi;

        Silinder silinder(radius, tinggi);
        cout << "Volume Silinder: " << silinder.getVolume() << std::endl;
        cout << "Luas Permukaan Silinder: " << silinder.getSurfaceArea() << std::endl;
    }

    return 0;
}
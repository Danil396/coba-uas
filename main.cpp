#include<iostream>
using namespace std;

#include "slot.cpp"
#include "antrian.cpp"
#include "riwayat.cpp"

int main()
{

    int pilihan;
    do
    {
        cout << "\n============= SISTEM SMART PARKING ==============\n";
        cout << "1.Data Antrian\n";
        cout << "2.Data Slot Parkir Antrian\n";
        cout << "3.Data Riwayat  Parkir\n";
        cout << "0.Keluar ...\n";

        switch (pilihan)
        {
        case 1:
            menuslot();
            break;
        case 2:
            menuantrian();
            break;
        case 3:
            menuriwayat();
            break;
        case 0:
            cout << "Keluar ..\n";
            break;
        default:
            cout << "Pilihan Tidak Valid\n";
        }
    } while (pilihan != 0);
}
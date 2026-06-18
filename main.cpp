#include<iostream>
using namespace std;


#include "antrian.cpp"


int main()
{
    int pilihan;
    do
    {
        cout << "\n============= SISTEM SMART PARKING ==============\n";
        cout << "1.Menu Slot\n";
        cout << "2.Menu antrian\n";
        cout << "3.Menu Riwayat  Parkir\n";
        cout << "0.Keluar ...\n";
        cout << "Pilihan: ";
        cin >> pilihan;          // <-- ini yang kurang

        switch (pilihan)
        {
        case 1:
            // menuslot();
            break;
        case 2:
            menuantrian();
            break;
        case 3:
            // menuriwayat();
            break;
        case 0:
            cout << "Keluar ..\n";
            break;
        default:
            cout << "Pilihan Tidak Valid\n";
        }
    } while (pilihan != 0);
}
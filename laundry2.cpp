#include <iostream>
using namespace std;

int main()
{
    string namaPelanggan;
    int jumlahPakaian, totalBayar;
    double tarifSatuan;

    cout << "===Laundry Mas Yuwan===" << endl;
    cout << "Masukkan Nama Pelanggan = ";
    cin >> namaPelanggan;
    
    cout << "Masukkan Jumlah Pakaian = ";
    cin >> jumlahPakaian;

    cout << "Masukkan Tarif Per Pakaian (tanpa titik) = ";
    cin >> tarifSatuan;

    totalBayar = jumlahPakaian * tarifSatuan;

    cout << "===STRUK LAUNDRY===" <<endl;
    cout << "Nama Pelanggan :" << namaPelanggan <<endl;
    cout << "Jumlah Pakaian :" << jumlahPakaian <<endl;
    cout << "Tarif Per Pakaian :" << tarifSatuan <<endl;
    cout << "Total Bayar : " << totalBayar << endl;
    cout << "===END===";

    return 0;



    
}
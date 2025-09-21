#include <iostream>
#include <string>
using namespace std;

int main()
{
    string namaBarang, namaPembeli, Agus;
    int jumlah;
    double total = 0;
    double blao = 500;
    double minyak = 20000;
    double rinso = 1000;
    double susuDancow = 2500;
    double mie = 2500;
    double kopi = 2000;
    double shampoo = 1500;
    double sabun = 5000;
    double terigu = 25000;
    double sabunCucipiring = 5000; 

    cout << "===TOKO PAK MUSLIHAT===" << endl;
    cout << "Blao = Rp 500" << endl;
    cout << "Minyak = Rp 20000" << endl;
    cout << "Rinso = Rp 1000 " << endl;
    cout << "Susu Dancow = Rp 2500" << endl;
    cout << "Mie = Rp 2500" << endl;
    cout << "Kopi = Rp 2000"<< endl;
    cout << "Shampoo = Rp 1500" << endl;
    cout << "Sabun = Rp 5000" << endl;
    cout << "Terigu = Rp 25000"<< endl;
    cout << "Sabun Cuci Piring = Rp 5000" << endl;

    cout << "Masukkan Nama Pembeli : ";
    cin >> namaPembeli;

    cout << "Masukkan Nama Barang : ";
    cin >> namaBarang;

    cout << "Masukkan Jumlah Barang : ";
    cin >> jumlah;


    if (namaBarang == "Blao") {
        total = blao * jumlah;
    } else if (namaBarang == "Minyak") {
        total = minyak * jumlah;
    } else if (namaBarang == "Rinso") {
        total = rinso * jumlah;
    } else if (namaBarang == "Susu Dancow") {
        total = susuDancow * jumlah;
    } else if (namaBarang == "Mie") {
        total = mie * jumlah;
    } else if (namaBarang == "Kopi") {
        total = kopi * jumlah;
    } else if (namaBarang == "Shampoo") {
        total = shampoo * jumlah;
    } else if (namaBarang == "Sabun") {
        total = sabun * jumlah;
    } else if (namaBarang == "Terigu") {
        total = terigu * jumlah;
    } else if (namaBarang == "Sabun Cuci Piring") {
        total = sabunCucipiring * jumlah;
    } else {
        cout << "Barang Tidak Tersedia Di Warung!" << endl;
        return 0;
    }


       if (namaPembeli == "Agus")
    {
    total = total - (total * 20/100);
    cout << "Diskon 20% untuk Agus !! " <<endl;
    }

    
    
    

    cout << "===STRUK BELANJA===" << endl;
    cout << "Nama Barang : " << namaBarang << endl;
    cout << "Jumlah Barang : " << jumlah << endl;
    cout << "Total Harga: " << total << endl;
    cout << "===END===";

    return 0;

}
#include <iostream>
using namespace std;

int main()
{
    string namaObat;
    int jumlahObat;
    double hargaSatuan, totalBayar;

    cout << "===Apotek Mas Yuwan===" << endl;
    cout << "Masukkan Nama Obat = ";
    cin >> namaObat;
    
    cout << "Masukkan jumlah obat (per strip) = ";
    cin >> jumlahObat;

    cout << "Masukkan Harga satuan Obat (harga per strip) = ";
    cin >> hargaSatuan;

    totalBayar = jumlahObat * hargaSatuan;

    cout << "===STRUK OBAT===" <<endl;
    cout << "Nama Obat : " << namaObat <<endl;
    cout << "stok Obat : " << jumlahObat <<endl;
    cout << "harga Obat : " << hargaSatuan <<endl;
    cout << "Total Harga Bayar : " << totalBayar <<endl;
    cout << "===END===";

    return 0;



    
}
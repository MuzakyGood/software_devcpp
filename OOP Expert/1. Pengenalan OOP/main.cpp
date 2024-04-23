#include <iostream>

using namespace std;

/*
    Contoh dari class OOP C++
    terdapat 3 akses modif
    1. Public (class dapat di akses publik)
    2. Private (Class hanya dapat dapat di akses di tertentu)
    3. protected
*/

// Nama class bebas (Di sarankan awalnya kapital untuk membedakan saja dari data atau variable)
// Nama data juga bebas, Data juga mirip variable

class Penduduk {
    public:
        string nama;
        int umur;
        string profesi;
        bool status;
};

int main() {

    string exit; // Ini variable gak ada hubungannya sama pelajaran tenang aja, hehehe

    // Data bisa di sebut juga sebagai objek

    Penduduk data1; // Cara memanggil yang ada di class
    data1.nama = "Bejo"; // Jadi mirip seperti variable
    data1.umur = 22;
    data1.profesi = "Penyihir";
    data1.status = false;

    // Saya buat data 2 
    Penduduk data2;
    data2.nama = "Tejo";
    data2.umur = 30;
    data2.profesi = "Kuli Bangunan";
    data2.status = true;

    cout << endl;
    cout << "Data 1 Nama : " << data1.nama << endl;
    cout << "Data 1 Umur : " << data1.umur << endl;
    cout << "Data 1 Profesi : " << data1.profesi << endl;
    cout << "Data 1 Status : " << data1.status << endl << endl;
    
    cout << "Data 2 Nama : " << data2.nama << endl;
    cout << "Data 2 Umur : " << data2.umur << endl;
    cout << "Data 2 Profesi : " << data2.profesi << endl;
    cout << "Data 2 Status : " << data2.status << endl << endl;

    cout << "Press any and enter to exit... ";
    cin >> exit;
    cout << endl;

    return 0;
}
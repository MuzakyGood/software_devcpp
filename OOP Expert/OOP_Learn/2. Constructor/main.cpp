#include <iostream>
#include <string>

using namespace std;

// Ini Constructor Pertama Saya

class Karyawan{
    public:
    string Nama;
    string Bidang;
    int Umur;
    
    Karyawan(string Nama, string Bidang, int Umur){ // Oh iya ini itu namanya parameter

        /*
            Harus Menggunakan Karyawan:: Karena sebagai pemisah atau bisa juga dengan mengubah
            berikut contohnya (string inputnama, string inputbidang, int inputumur) dan
            Nama = inputnama;
            Bidang = inputbidang;
            Umur = inputumur;
            Fungsinya sebagai pemisah
        */
        Karyawan::Nama = Nama;
        Karyawan::Bidang = Bidang;
        Karyawan::Umur = Umur;

        cout << endl;
        cout << "1." << Karyawan::Nama << endl;
        cout << "2." << Karyawan::Bidang << endl;
        cout << "3." << Karyawan::Umur << endl << endl;

    }

};

int main(int argc, char const *argv[])
{
    
    Karyawan data1 = Karyawan("Dono", "PPKN", 49);
    Karyawan data2 = Karyawan("Samsudin", "INFORMATIKA", 47);
    Karyawan data3 = Karyawan("Lesti", "MTK", 30);
    return 0;
}

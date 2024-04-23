#include <iostream>
#include <string>

using namespace std;

// Ini Constructor Pertama Saya

class Karyawan{
    public:
    string Nama;
    string Bidang;
    int Umur;
    
    Karyawan(string inputnama, string inputbidang, int inputumur){
        Karyawan::Nama = inputnama;
        Karyawan::Bidang = inputbidang;
        Karyawan::Umur = inputumur;

        cout << endl;
        cout << "1." << Karyawan::Nama << endl;
        cout << "2." << Karyawan::Bidang << endl;
        cout << "3." << Karyawan::Umur << endl << endl;

    }

};

int main(int argc, char const *argv[])
{
    
    Karyawan data1("Dono", "PPKN", 49);
    Karyawan data2("Samsudin", "INFORMATIKA", 47);
    Karyawan data3("Lesti", "MTK", 30);
    return 0;
}

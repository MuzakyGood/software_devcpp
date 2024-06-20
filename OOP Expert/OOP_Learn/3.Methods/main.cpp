#include <iostream>
#include <string>

using namespace std;

class Karyawan{
    public:
    string Nama;
    string Bidang;
    int Umur;
    
    Karyawan(string Nama, string Bidang, int Umur){

        Karyawan::Nama = Nama;
        Karyawan::Bidang = Bidang;
        Karyawan::Umur = Umur;

    }
        
        // Method tanpa parameter dan tanpa return
        void update(){
            cout << endl;
            cout << "1." << Nama << endl;
            cout << "2." << Bidang << endl;
            cout << "3." << Umur << endl;
        }
        // Method dengan parameter dan tanpa return
        // Saya menggunakan pointer agar lebih cepat dari string const char*
        void updateagain(const char* NamaRe, const char* BidangRe, int UmurRe) {
            Karyawan::Nama = NamaRe;
            Karyawan::Bidang = BidangRe;
            Karyawan::Umur = UmurRe;

        } 
        // Method tanpa parameter dan dengan return
        string getNama() {
            return Karyawan::Nama;
        }
        int GetUmur() {
            return Karyawan::Umur;
        }

        // Method dengan parameter dan return
        int PlusUmur(const int tambahanumur){
            return Karyawan::Umur + tambahanumur;
        }

};

int main(int argc, char const *argv[])
{
    
    Karyawan data1 = Karyawan("Dono", "PPKN", 49);
    Karyawan data2 = Karyawan("Samsudin", "INFORMATIKA", 47);
    Karyawan data3 = Karyawan("Lesti", "MTK", 30);

    data1.update();

    data1.updateagain("Harto", "IPS", 20);
    data1.update();

    string dataNama = data1.getNama();
    cout << endl << "Data Nama: " << dataNama << endl;
    int dataUmur = data1.GetUmur();
    cout << "Data Umur: " << dataUmur << endl << endl;

    cout << "Umur Plus: " << data2.PlusUmur(20) << endl << endl;

    return 0;
}

#include <iostream>

using namespace std;

/*
Pada kesempatan kali ini saya akan membuat program simpel berupa
Pilihan Kallukator pilihan dengan Opreator Aritmatika dasar.
*/

int main(){

    string masukan;

    cout << endl;
    cout << "SELAMAT DATANG DI ARITMATIKA PILIHAN" << endl;
    cout << endl;

    while (true)
    {
        cout << "Menu :" << endl;
        cout << "1. Pertambahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Exit" << endl;
        cout << "Pilih number (1,2,etc) :";
        cin >> masukan;
        cout << endl;
        if (masukan == "1")
        {
           int angtam1;
           int angtam2;
           int hastam;

           cout << "Masukan angka pertama :";
           cin >> angtam1;
           cout << endl;

           cout << "Masukan Angka kedua :";
           cin >> angtam2;

            hastam = angtam1 + angtam2;

            cout << endl;
           cout << angtam1 << " + " << angtam2 << " = " << hastam << endl;
           cout << endl;
        }
        else if (masukan == "2")
        {
            int angkur1;
           int angkur2;
           int haskur;

           cout << "Masukan angka pertama :";
           cin >> angkur1;
           cout << endl;

           cout << "Masukan Angka kedua :";
           cin >> angkur2;

            haskur = angkur1 - angkur2;

            cout << endl;
           cout << angkur1 << " - " << angkur2 << " = " << haskur << endl;
           cout << endl;
        }
        else if (masukan == "3")
        {
            int angkal1;
           int angkal2;
           int haskal;

           cout << "Masukan angka pertama :";
           cin >> angkal1;
           cout << endl;

           cout << "Masukan Angka kedua :";
           cin >> angkal2;

            haskal = angkal1 * angkal2;

            cout << endl;
           cout << angkal1 << " X " << angkal2 << " = " << haskal << endl;
           cout << endl;
        }
        else if (masukan == "4")
        {
            int angbag1;
           int angbag2;
           int hasbag;

           cout << "Masukan angka pertama :";
           cin >> angbag1;
           cout << endl;

           cout << "Masukan Angka kedua :";
           cin >> angbag2;

            hasbag = angbag1 / angbag2;

            cout << endl;
           cout << angbag1 << " : " << angbag2 << " = " << hasbag << endl;
           cout << endl;
        }
        else if (masukan == "5")
        {
            cout << "Terima kasih, Karena telah mencoba program simpel saya." << endl;
            cout << endl;
            break;
        }
        
        else
        {
            cout << "Index invalid, Masukan kembali (1,2,etc)" << endl;
            cout << endl;
        }
        

    }
    

    return 0;

}
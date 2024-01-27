#include <iostream>

using namespace std;

    /*
    Pada program kali ini saya akan membuat percabangan menggunakan if, else if, else dalam C++
    programnya seperti berikut:
    */

int main(){
    
    int nilai;
    string nama;
    string exit;

    cout << "Deteksi lulus atau tidak lulus dengan C++" << endl;
    cout << endl;

    cout << "Masukan nama kamu : ";
    cin >> nama;

    cout << endl;
    cout << "Masukan Nilai " << nama << " : ";
    cin >> nilai;
    cout << endl;

    if (nilai >= 85) //Ini berfungsi untuk melakukan percabangan lulus atau tidak
    {
        cout << "Kamu di atas KKM, " << nama << " Lulus." << endl;
        cout << endl;
    }
     else if (nilai >= 75)
     {
        cout << "Kamu harus remed, " << nama << " belum memenuhi syarat." << endl;
        cout << endl;
     }
    else if (nilai >= 30)
    {
        cout << "Kamu tidak lulus, " << nama << " Bisa kerjakan kembali." << endl;
        cout << endl;
    } 
    else
    {
        cout << "Tidak Diterima, " << nama << " Keluar!!" << endl;
        cout << endl;
    }

    cout << "Close press any and enter... ";
    cin >> exit;
    cout << "Terima Kasih " << nama << ", Karena telah mencoba program ini." << endl;
    cout << endl;
    

    return 0;
}
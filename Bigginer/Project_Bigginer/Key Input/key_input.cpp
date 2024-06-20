#include <iostream>

using namespace std;

/* 
Pada kesempatan kali ini saya akan membuat sebuah program simple dengan Input
Tetapi memasukan input dengan Keyboard, Langsung saja kita mulai !
*/

int main(){

// Jadi perogram yang saya buat itu simpel hanya aritmatika dasar
    
    string nama; //Ini adalah variabel string atau teks

    cout << "SELAMAT DATANG DI ARITMATIKA SIMPEL" << endl;
    cout << "Masukan nama sebelum mulai : ";
    cin >> nama;
    cout << endl;

    int tama; //Ini adalah variabel integer atau angka 
    int tamb;
    int tamh;

    cout << "1. Contoh program simpel aritmatika pertambahan" << endl;
    cout << "Masukan Angka 1 : ";
    cin >> tama;
    cout << "Masukan Angka 2 : ";
    cin >> tamb;
    cout << endl;

    tamh = tama + tamb;

    cout << tama << " + " << tamb << " = " << tamh << endl;
    cout << endl;

    int kura;
    int kurb;
    int kurh;

    cout << "2. Contoh program simpel aritmatika pengurangan" << endl;
    cout << "Masukan Angka 1 : ";
    cin >> kura;
    cout << "Masukan Angka 2 : ";
    cin >> kurb;
    cout << endl;

    kurh = kura - kurb;

    cout << kura << " - " << kurb << " = " << kurh << endl;
    cout << endl;

    int kala;
    int kalb;
    int kalh;

    cout << "3. Contoh program simpel aritmatika perkalian" << endl;
    cout << "Masukan Angka 1 : ";
    cin >> kala;
    cout << "Masukan Angka 2 : ";
    cin >> kalb;
    cout << endl;

    kalh = kala * kalb;

    cout << kala << " x " << kalb << " = " << kalh << endl;
    cout << endl; 

    int baga;
    float bagb;
    int bagh;

    cout << "4. Contoh program simpel aritmatika pembagian" << endl;
    cout << "Masukan Angka 1 : ";
    cin >> baga;
    cout << "Masukan Angka 2 : ";
    cin >> bagb;
    cout << endl;

    bagh = baga / bagb;

    cout << baga << " : " << bagb << " = " << bagh << endl;
    cout << endl;

    cout << "Terima Kasih " << nama << "," << "karena telah mencoba perogram ini." << endl;

    string close;

    cout << "Press any to close..";
    cin >> close;

    return 0;
}
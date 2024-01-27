#include <iostream>
using namespace std;

//Saya akan mencontohkan variabel dengan C++
//Oh iya ini itu program output

int main(){
    cout << endl;
    std::cout << "=====Contoh Output DI C++" << endl;
    string objek = " manusia";
    std::cout << "Hi saya adalah" << objek << endl;
    std::cout << "Di atas adalah contoh perogram Output" << endl;
    cout << endl;
    
    //saya akan mencoba fungsi (aslinya bahasa C tapi bisa juga di C++)
    //Arti dari Simbol:
    /*
    %c	untuk menampilkan karakter
    %s	untuk menampilkan teks (string)
    %d, %i	untuk menampilkan bilangan desimal
    %f	untuk menampilkan bilangan pecahan
    %o	untuk menampilkan bilangan oktal
    %x	untuk menampilkan bilangan heksadesimal
    \t	untuk membuat tabs
    */

    printf("");
    printf("=====Contoh Fungsi Di C++=====\n");
    printf("Hello, ini adalah teks output\n");
    printf("Nama saya %s\n", "Zach");
    printf("Usia saya %d\n", 17);
    printf("\n");

    //saya akan mencoba program input

    string nama;
    std::cout << "=====Contoh Input di C++=====" << endl;
    cout << "Tuliskan nama: ";
    cin >> nama;

    cout << "Hi! " << nama;
    cout << ", Selamat datang di program sederhana buatan saya!" << endl;
    cout << endl;

    std::cout << "=====Contoh Input dengan fungsi pemrograman C di C++=====" << endl;
    char name[20], web_address[30];

    printf("Nama: ");
    scanf("%s", &name);

    printf("Alamat web: ");
    scanf("%s", &web_address);

    printf("\n------------------------------\n");
    printf("Nama yang diinputkan: %s\n", name);
    printf("Alamat Web yang diinputkan: %s\n", web_address);
    cout << endl;
    
    return 0;
}
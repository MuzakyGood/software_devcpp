#include <iostream>
#include "math.h" //Digunakan untuk memanggil file diluar main.cpp

/*
    Pada kesempatan kali ini saya akan menunjukan fungsi sekaligus array di C++
    pada intinya saya akan memberi tanda jika kalian bingung.
*/

using namespace std;

void list_nama() {  //Jadi void adalah class yang dapat di panggil dengan ()

    string nama_teman[5] = {   /* Salah satu perintah untuk membuat array [5] berfungsi untuk jumlah isi dari array  */     
                                // Array digunakan untuk menyimpan data
        "1. Rifki",
        "2. Dani",
        "3. Doni",
        "4. Fauzan",
        "5. Rafael"
    };

    cout << endl;
    cout << "Ini adalah list Top Rank: " << endl;
    cout << nama_teman[0] << endl;
    cout << nama_teman[1] << endl;
    cout << nama_teman[2] << endl;
    cout << nama_teman[3] << endl;
    cout << nama_teman[4] << endl << endl;; //[4] merupakan index yang akan di panggil yaitu Rafael

    cout << "Jawab pertanyaan ini untuk masuk top rank!" << endl;

}

int main() {  //int adalah class yang akan di panggil duluan atau di utamakan

    string exit;

    list_nama(); //Perintah yang digunakan untuk memanggil function dari class void
    math();

    cout << "Press any and enter to exit... ";
    cin >> exit;
    cout << endl;

    return 0; 
}
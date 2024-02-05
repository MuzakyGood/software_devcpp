/*
    Ini adalah file yang di guanakan untuk membuat soal dan jawaban
*/

#include <iostream>

using namespace std;    

void math() { //Saya gunakan void karena perintah ini akan di guanakan untuk di panggil oleh main.cpp

    int jawaban1;
    int jawaban2;
    int jawaban3;
    int jawaban4;

    cout << "10 + 20 = ";
    cin >> jawaban1;

    if (jawaban1 == 30)
    {
        cout << endl;
        cout << "Selamat Anda sekarang berada di ranking 4" << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "Anda sekarang berada di rangking 6" << endl;
        cout << endl;
    }
    
    cout << "10 - 3 = ";
    cin >> jawaban2;
    if (jawaban2 == 7)
    {
        cout << endl;
        cout << "Selamat Anda sekarang berada di ranking 3" << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "Anda sekarang berada di rangking 6" << endl;
        cout << endl;
    }
    


    cout << "5 X 5 = ";
    cin >> jawaban3;
    if (jawaban3 == 25)
    {
        cout << endl;
        cout << "Selamat Anda sekarang berada di ranking 2" << endl;
        cout << endl; 
    }
    else
    {
        cout << endl;
        cout << "Anda sekarang berada di rangking 6" << endl;
        cout << endl;
    }
    

    cout << "12 : 4 = ";
    cin >> jawaban4;
    if (jawaban4 == 3)
    {
        cout << endl;
        cout << "Selamat Anda sekarang berada di ranking 2" << endl;
        cout << endl; 
    }
    else
    {
        cout << endl;
        cout << "Anda sekarang berada di rangking 6" << endl;
        cout << endl;
    }
    
    
}

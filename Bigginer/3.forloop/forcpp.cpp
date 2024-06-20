#include <iostream>

using namespace std;

int main(){

    int i;
    string name;
    string exit;

    cout << "Masukan nama anda: ";
    cin >> name;
    cout << endl;

    for (i = 0; i < 10; i++)
    {
        cout << "Hello " << name << ", Selamat datang " << name << endl;
        cout << endl;
    }

    cout << "Press any and enter to exit... ";
    cin >> exit;
    cout << endl;

    
    
    return 0;

}
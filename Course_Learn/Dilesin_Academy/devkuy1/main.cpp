#include <iostream>

using namespace std;
int main(){
    
    int num;

    cout << "Masukan Angka: ";
    cin >> num;

    if (num % 2 == 0){
        cout << "Angka Genap" << endl;
    } else{
        cout << "Angka Ganjil" << endl;
    }
    
    return 0;
}
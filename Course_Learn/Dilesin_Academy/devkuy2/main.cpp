#include <iostream>

using namespace std;
int main(){
    
    int num1;
    int num2;

    cout << "Masukan Angka 1: ";
    cin >> num1;
    cout << endl;
    cout << "Masukan Angka 2: ";
    cin >> num2;
    cout << endl;

    if (num1 > num2)
    {
        cout << num1 << " Lebih besar dari pada " << num2 << endl;
    }
    else if(num1 < num2){
        cout << num1 << " Lebih Kecil dari pada " << num2 << endl;
    }
    else{
        cout << "Invalid" << endl;
    }
    
    
    return 0;
}
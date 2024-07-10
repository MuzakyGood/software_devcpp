#include <iostream>
#include "include/math.hpp"

using namespace std;
int main(){

    string exit;
    int number1{20};
    int number2{10};

    system("cls");
    cout << "All Math Result" << "\n";
    plusdraw(number1,number2);
    mindraw(number1,number2);
    multidraw(number1, number2);
    sharedraw(number1,number2);

    cin >> exit;

    return 0;
}
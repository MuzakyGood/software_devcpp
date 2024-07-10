#include <iostream>
#include <windows.h>

// Global Variable
int number1;
int number2;
int result;

using namespace std;
// All function
void plusdraw(int number1, int number2){

    Sleep(90);
    Beep(555, 7);
    result = number1 + number2;
    cout << number1 << " + " << number2 << " = " << result << "\n";

}

void mindraw(int number1, int number2){

    Sleep(90);
    Beep(555, 7);
    result = number1 - number2;
    cout << number1 << " - " << number2 << " = " << result << "\n";

}

void multidraw(int number1, int number2){

    Sleep(90);
    Beep(555, 7);
    result = number1 * number2;
    cout << number1 << " X " << number2 << " = " << result << "\n";

}

void sharedraw(int number1, int number2){

    Sleep(90);
    Beep(555, 7);
    result = number1 / number2;
    cout << number1 << " : " << number2 << " = " << result << "\n";

}
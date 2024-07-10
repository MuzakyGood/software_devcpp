/* 
    Today i want show u header in C++
    I sugest to use std:: cuz its standart in C++
    In this learn i will show u header-guard file in C++ .
    Guard Header works so that the compiler does not 
    consider duplicates when called in other headers.
*/
#include <iostream>
#include <windows.h>
#include "include/add.h"
#include "include/plus.h"

int main(int argc, char const *argv[]){

    int x;
    int y;

    std::cout << "\n \t MATH HEADER AND GUARD-HEADER" << "\n \n";
    std::cout << "Input Num1: ";
    std::cin >> x;
    Beep(2000, 500);
    std::cout << "\n";
    std::cout << "Input Num2: ";
    std::cin >> y;
    Beep(2000, 500);
    std::cout << "\n";
    
    std::cout << "Result: " << plus(x, y) << '\n';
    Beep(1000, 1000);

    return 0;
}

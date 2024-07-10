/* 
    Today i want show u header in C++
    I sugest to use std:: cuz its standart in C++
    In this learn i will show u header-guard file in C++
*/
#include <iostream>
#include "include/add.h"
#include "include/plus.h"

int main(int argc, char const *argv[]){

    std::cout << plus();

    return 0;
}

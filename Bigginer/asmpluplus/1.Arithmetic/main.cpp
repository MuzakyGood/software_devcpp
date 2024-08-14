#include <iostream>
#include <unistd.h>
#include "System/input.hpp"
#include "System/check.hpp"

int main(){

    int add;
    int sub;
    int mul;
    // int divs;
    __asm__("movl $20, %%eax;" 
            "movl $20, %%ebx;"
            "addl %%ebx, %%eax": "=a"(add));

    __asm__("movl $100, %%eax;" 
            "movl $20, %%ebx;"
            "subl %%ebx, %%eax": "=a"(sub));
    
    
    __asm__("movl $5, %%eax;" 
            "movl $5, %%ebx;"
            "imul %%ebx, %%eax": "=a"(mul));
    
    // Division only available for x86 or 32-Bit 
    // __asm__("movl $100, %%eax;" 
    //         "movl $5, %%ebx;"
    //         "divl %%ebx, %%eax": "=a"(divs));

    std::cout << "\n \t EXAMPLE MATH ASSEMBLY IN C++" << "\n";
    sleep(1);
    std::cout << "My code in Main.cpp: " << "\n";
    sleep(1);
    checkOS();
    sleep(1);    
    std::cout << "\n" << "\n" << "ASM Addition: 20 + 20 = " << add << "\n";
    sleep(1);
    std::cout << "ASM Subtraction: 100 - 20 = " << sub << "\n";
    sleep(1);
    std::cout << "ASM Multiplication: 5 X 5 = " << mul << "\n";
    sleep(1);
    //std::cout << "ASM Division: 100 : 5 = " << divs << "\n";

    std::cout << "\n" << "Press F to exit...." << "\n";
    ifkeypressed('F');
    return 0;
}
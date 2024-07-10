// its header file Old C++
/*
    This have guard for header 
    or you can use #pragma once 
    for new compiler.
*/ 
#ifndef ADD_H // This example old guard in C++
#define ADD_H
#include <iostream>
int add(){

    return 4;
}

#endif

int plus(){

    return 4 + add();
}
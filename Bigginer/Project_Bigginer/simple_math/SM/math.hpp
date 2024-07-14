#include "numb.hpp"
#ifndef MATH_HPP
#define MATH_HPP

int plus(int x, int y){
    return num1(x) + num2(y);
}

int min(int x, int y){
    return num1(x) - num2(y);
}

int multi(int x, int y){
    return num1(x) * num2(y);
}

int share(int x, int y){
    return num1(x) / num2(y);
}

#endif
#include <iostream>
#include <cstdlib>
#ifndef CHECK_HPP
#define CHECK_HPP

void checkOS(){

    const char* filename = "main.cpp";
    std::string command = "type ";
    command += filename;
    
    #if defined(__WIN32)
    system(command.c_str());
    #else
    std::string command = "cat ";
    command += filename;
    system(command.c_str());
    #endif

}

#endif
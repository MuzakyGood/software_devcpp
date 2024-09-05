#include <iostream>

extern "C" int math(void);

int main(){

    std::cout << "5 + 5 + 5 = " << math() << "\n";

    return 0;
}
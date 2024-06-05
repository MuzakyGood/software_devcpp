#include <iostream>
#include <string>
#include "voidnewfile.hpp"
#include "exitout.hpp"
#include "extravoid.hpp"
#include "openpain.hpp"

using namespace std;
int callfirst(){

    cout << "\n \tSIMPLE BEST MATH" << "\n" << "\n";
    return 5 * 5;
}

int main(int argc, char const *argv[]){

    string userinput;
    int resultvoid1{callfirst()};
    auto resultextraplus{plus1() / plus2()};

    cout << "This result math with void: " << "\n";
    cout << resultvoid1 << "\n" << "\n";
    newfile();

    cout << "\n" << resultextraplus << "\n";
    
    cout << "want open MSpaint ?" << "\n";
    cin >> userinput;
    if (userinput == "yes" || "Yes"){
        
        openpaint();

    } else{
        cout << "Okey I Am understand" << "\n";
    }

    closewindow();
    system("cls");
    return 0;
}


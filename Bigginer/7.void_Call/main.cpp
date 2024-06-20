#include <iostream>
#include <string>
#include "include/voidnewfile.hpp"
#include "include/exitout.hpp"
#include "include/extravoid.hpp"
#include "include/openpain.hpp"
#include "include/opennotepad.hpp"
#include "include/openexplore.hpp"

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
    cout << "=========================================================" << "\n";
    newfile();
    cout << "=========================================================" << "\n";
    cout << "\n" << resultextraplus << "\n";
    cout << "=========================================================" << "\n";
    
    cout << "want open MSpaint ?";
    cin >> userinput;
    if (userinput == "yes" || userinput == "Yes" || userinput == "Iya" || userinput == "iya"){
        
        openpaint();

    } else{
        cout << "Okey I Am understand" << "\n";
    }
    cout << "=========================================================" << "\n";
    cout << "want open Notepad ?";
    cin >> userinput;
    if (userinput == "yes" || userinput == "Yes" || userinput == "Iya" || userinput == "iya"){
        
        opennotepad();

    } else{
        cout << "Okey I Am understand" << "\n";
    }
    cout << "=========================================================" << "\n";
    cout << "want open explorer ?";
    cin >> userinput;
    if (userinput == "yes" || userinput == "Yes" || userinput == "Iya" || userinput == "iya"){
        
        openexplorer();

    } else{
        cout << "Okey I Am understand" << "\n";
    }
    cout << "=========================================================" << "\n";

    closewindow();
    system("cls");
    return 0;
}


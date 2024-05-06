#include <iostream>
#include <fstream>
#include <string>

using namespace std;
class Client{
    public:
    string name;
    string id;
    string money;

    Client(string name, string id, string money){
        Client::name = name;
        Client::id = id;
        Client::money = money;
    }
    string stringify(){
        return "\n" + name + " " + id + " " + money + " ";
    }
};

class Database{
    public:
    ifstream in;
    ofstream out;
    string FileName;

    Database(const char* FileName){
        Database::FileName = FileName;
    }
    void save(Client data){
        cout << data.name << endl;
        cout << data.id << endl;
        cout << data.money << endl;

        Database::out.open(Database::FileName, ios::app);
        Database::out << data.stringify();
        Database::out.close();
    }

};

int main(int argc, char const *argv[])
{   
    string name, id, money, exit;

    cout << "\n \t C++ SIMPLE DATABASE GENERATOR" << endl << endl;
    cout << "====================================================" << endl << endl;

    cout << "Enter your Short Name: ";
    cin >> name;
    cout << "Enter your ID: ";
    cin >> id;
    cout << "Enter your money: ";
    cin >> money;

    cout << endl << "Output: " << endl;
    Client DatC1 = Client(name, id, money);
    Database DatB = Database("Central_Data.txt");
    
    // Save data ke database
    DatB.save(DatC1);
    
    cout << "====================================================" << endl;
    cout << " \n \t THANK YOU" << endl << endl;
    cout << "====================================================" << endl << endl;
    cout << "Press any and enter to exit... ";
    cin >> exit;

    return 0;
}
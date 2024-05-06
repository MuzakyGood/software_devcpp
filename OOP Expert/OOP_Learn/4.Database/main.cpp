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

    Client DatC1 = Client("Udin", "125550009", "100.000.000");
    Database DatB = Database("client.txt");
    
    // Save data ke database
    DatB.save(DatC1);

    return 0;
}
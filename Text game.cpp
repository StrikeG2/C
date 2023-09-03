#include <iostream>
using namespace std;



class Player {
public:
    Player(string n, char s) : name(n), sex(s) {}

    void infoDisplay() {
        cout<< "Name : " << name << endl;
        cout<< "Gender : " << sex << endl;
    }

private:
    string name;
    char sex;
};

int main() {
    
}
#include <iostream>
using namespace std;

class University{
    string name;
    string location;

    void get_details(string n, string l){
        name = n;
        location = l;
    }

    void display_details(){
        cout << "Name: " << name << endl;
        cout << "Location: " << location << endl;
    }
};


int main() {
    
    return 0;
}
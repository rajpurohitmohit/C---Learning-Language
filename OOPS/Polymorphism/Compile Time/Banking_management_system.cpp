#include <iostream>
using namespace std;

class Bank{
    string name;
    int accNumber;
    float balance;

public:
    Bank(string n, int accNo, float bal){
        name = n;
        accNumber = accNo;
        balance = bal;
    }

    Bank(string n, int accNo){
        name = n;
        accNumber = accNo;
        balance = 0.0;
    }

    Bank(int accNo, string compName){
        name = compName;
        accNumber = accNo;
        balance = 0.0;

    }

    void display_details(){
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    Bank P1("Mohit", 45, 5000.5);
    Bank P2("Dashrat", 45);
    Bank P3(45, "Technology pvt limited");

    P1.display_details();
    P2.display_details();
    P3.display_details();
    return 0;
}
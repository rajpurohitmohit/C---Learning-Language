#include <iostream>
using namespace std;

class Bank{
private:
    string name;
    double balance;
    double interest;

    double calculate_interest(){
        return (balance * 5) / 100;
    }
public:
    void setDetails(string n, double b){
        name = n;
        balance = b;
    };

    void displayAccountDetails(){
        cout << "Account Holder's Name: " << name << endl;
        cout << "Account Balance : " << balance << endl;
        cout << "Interest Earned : " << calculate_interest() << endl;
    }
};


int main() {
    Bank b1;
    b1.setDetails("Mohit", 1000);
    b1.displayAccountDetails();
    return 0;
}
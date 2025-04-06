#include <iostream>
using namespace std;

int main() {
    struct bank {
        int accID;
        string holderName;
        float balance;
        int password;
    };

    bank bankInfo1;
    bankInfo1.accID = 8900;
    bankInfo1.holderName = "Ramesh";
    bankInfo1.balance = 1000.09;
    bankInfo1.password = 123587;

    bank bankInfo2;
    bankInfo2.accID = 8901;
    bankInfo2.holderName = "Suresh";
    bankInfo2.balance = 7000.10;
    bankInfo2.password = 976543;
    
    cout << bankInfo2.accID << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    float amount;
    cout << "Enter the amount: Rs ";
    cin >> amount;

    if (amount > 1000) {
        amount = amount - (amount * 0.10);
    }
    else if (amount > 500 && amount <= 1000) {
        amount = amount - (amount * 0.05);
    }


    cout << "Amount after discount: Rs " << amount << endl;

    return 0;
}
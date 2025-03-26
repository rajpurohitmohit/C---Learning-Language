// To calculate leap year
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the year:- " << endl;
    cin >> a;

    if ((a%4==0)) {
        cout << a << " is a leap year" << endl;
    }
    else {
        cout << a << " is not a leap year" << endl;
    }
    return 0;
}
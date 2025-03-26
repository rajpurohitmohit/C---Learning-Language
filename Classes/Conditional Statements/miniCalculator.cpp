#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the action you want to perform(1 - +, 2 - -, 3 - *, 4 - /): ";
    cin >> a;

    switch (a){
        case 1:
        int b, c;
        cout << "Enter the 2 numbers for the sum:- ";
        cin >> b >> c;

        cout << "The sum is" << b + c << endl;
        break;

        case 2:
        int d, e;
        cout << "Enter the 2 numbers for the difference:- ";
        cin >> d >> e;

        cout << "The difference is" << d - e << endl;
        break;

        case 3:
        int f, g;
        cout << "Enter the 2 numbers for the product:- ";
        cin >> f >> g;

        cout << "The product is" << f * g << endl;
        break;

        case 4:
        int h, i;
        cout << "Enter the 2 numbers for the division:- ";
        cin >> h >> i;

        cout << "The division is" << h / i << endl;
        break;
    }
    return 0;
}
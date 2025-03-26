#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, originalNumber, remainder, digits = 0;
    float sum = 0.0;

    cout << "Enter an integer: ";
    cin >> number;

    originalNumber = number;

    for (originalNumber = number; originalNumber != 0; ++digits) {
        originalNumber /= 10;
    }

    originalNumber = number;

    for (originalNumber = number; originalNumber != 0; originalNumber /= 10) {
        remainder = originalNumber % 10;
        sum += pow(remainder, digits);}

    if ((int)sum == number)
        cout << number << " is an Armstrong number.";
    else
        cout << number << " is not an Armstrong number.";

    return 0;
}
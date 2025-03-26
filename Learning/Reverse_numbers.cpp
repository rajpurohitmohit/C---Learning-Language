#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the number to reverse: ";
    cin >> number;
    int rev = 0;

    while(number){
        rev = number % 10 + rev * 10;
        number/=10; 
    }
    cout << "Reversed order:- "<<rev;
    return 0;
}
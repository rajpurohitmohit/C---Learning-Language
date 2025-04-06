#include <iostream>
using namespace std;

int main() {
    int n, num, b;
    int rev = 0;

    cout << "Enter the number:- ";
    cin >> num;
    n = num;
    while(n != 0){
        b = n % 10;
        rev = rev * 10 + b;
        n = n / 10;
    }

    if (num == rev){
        cout << "The number is a palindrome." << endl;
    }
    else{
        cout << "The number is not a palindrome." << endl;
    }

    return 0;
}
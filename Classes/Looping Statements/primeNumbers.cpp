#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " are: ";
    for (int num = 2; num <= n; num++) {
        int prime = 1; 

        for (int i = 2; i*i <= num; i++) { 
            if (num % i == 0) {
                prime = 0;
                break;
            }
        }

        if (prime) {
            cout << num << " ";
        }
    }
    cout << endl;

    return 0;
}
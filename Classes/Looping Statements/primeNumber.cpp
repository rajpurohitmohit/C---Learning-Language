#include <iostream>
using namespace std;

int main() {
    int n, flag = 1;
    cout << "Enter the no.";
    cin >> n;
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (flag == 1){
        cout << "Prime Number" << endl;
    }
    else{
        cout << "Not a prime no" << endl;
    }
    return 0;
}
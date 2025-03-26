#include <iostream>
using namespace std;

int main() {
    int n, num = 1;
    cout << "Enter the no. :- ";
    cin >> n;

    for(int i = 1; i<=n; i++){
        for (int j = 1; j <= i; j++){
            // cout << i << " ";
            // cout << j << "";
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}
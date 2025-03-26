#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    
    if((a>b && a<c) || (a<b && a>c)){
        cout << a<< " is the middle value" << endl;
    }
    else if((b>a && b<c) || (b<a && b>c)){
        cout << b<< " is the middle value" << endl;
    }
    else{
        cout << c<< " is the middle value" << endl;
    }

    return 0;
}
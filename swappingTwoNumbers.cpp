#include <iostream>
using namespace std;

// CALL BY VALUE
int swap_Value(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// CALL BY REFERENCE
int swap_Reference(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// CALL BY POINTER
int swap_pointer(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a = 10;
    int b = 100;
    
    swap_Value(a, b);
    cout << "CALL BY VALUE - " << endl;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    
    swap_Reference(a, b);
    cout << "CALL BY REFERENCE - " << endl;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;

    swap_pointer(&a, &b);
    cout << "CALL BY POINTER - " << endl;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;

    return 0;
}
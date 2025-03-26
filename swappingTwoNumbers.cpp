#include <iostream>
using namespace std;

int swap_Value(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int swap_Reference(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int swap_pointer(int *a, int *b){
    int temp;
    temp = a;
    a = b;
    b = 
}
int main() {
    int a = 10;
    int b = 100;
    
    swap(a, b);
    cout << "CALL BY VALUE - " << endl;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;
    
    return 0;
}
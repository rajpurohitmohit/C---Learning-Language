#include <iostream>
using namespace std;

class Addition{
    public:
    int a, b;
    
    void getdata(){
        cout << "Enter the First no.:- ";
        cin >> a;

        cout << "Enter the Second no.:- ";
        cin >> b;
    }
    void displaysum();
};


void Addition :: displaysum(){
    cout << "a + b = " << a+b << endl;
}

int main() {
    Addition myObj;
    myObj.getdata();
    myObj.displaysum();
    return 0;
}
#include <iostream>
using namespace std;

class Parent{
public:
    // Function Overriding
    void getInfo(){
        cout << "Parent Class";
    }
};

class Child : public Parent{
public:
    void getInfo(){
        cout << "Child Class";
    }
};

int main() {
    Child c1;
    c1.getInfo();

    Parent p1;
    p1.getInfo();
    return 0;
}
#include <iostream>
using namespace std;

class Parent{
public:
    // Virtual Function
    void getInfo(){
        cout << "Parent Class";
    }
    
    virtual void hello(){
        cout << "Hello from Parent";
    }
};

class Child : public Parent{
public:
    void getInfo(){
        cout << "Child Class";
    }

    void hello(){
        cout << "Hello from Child";
    }
};

int main() {
    Child c1;
    c1.hello();

    Parent p1;
    p1.hello();
    return 0;
}
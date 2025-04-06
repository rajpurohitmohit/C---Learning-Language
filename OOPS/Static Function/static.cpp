#include <iostream>
using namespace std;

// Static Function
void func(){
    static int x = 0; // Initialization Statement - 1 Run
    cout << x <<  endl;
    x++;

};

class Class{
public:
    int x;
    // Static Member Function
    void increment(){
        x = x + 1;
    }
};

int main() {
    // Static Function
    func();
    func();
    func();

    // Static Member Function
    Class obj1;
    Class obj2;

    // obj1.x = 100;
    // cout << obj1.x << endl;
    // obj1.increment();
    
    obj2.x = 200;
    cout << obj2.x << endl;
    obj2.increment();

    return 0;
}
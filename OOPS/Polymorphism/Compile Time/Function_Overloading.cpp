#include <iostream>
using namespace std;

class Print{
public:
    // Function Overloading
    void show(int x){
        cout << "int: " << x << endl;
    }
    void show(char ch){
        cout << "char: " << ch << endl;
    }
};

int main() {
    Print p1;
    p1.show(12);
    return 0;
}
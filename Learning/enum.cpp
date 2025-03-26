#include <iostream>
using namespace std;

int main() {
    enum Level{
        LOW = 12,
        MEDIUM,
        HIGH
    };
    enum Level myvar = MEDIUM;
    cout << myvar << endl;

    return 0;
}
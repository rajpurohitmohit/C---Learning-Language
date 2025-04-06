#include <iostream>
using namespace std;

int main() {
    int units;
    cout << "Enter the units:- ";
    cin >> units;

    if (units<=100){
        units = 0;
    }
    else if (units > 100 && units <= 200){
        units = (units - 100)* 5;
    }
    else{
        units = (units - 200) + (units*5) * 10;
    }

    cout << units << endl;

    return 0;
}
#include <iostream>
using namespace std;


int main() {
    double a, b, c, d;
    
    cout << "Principal interest (in numeric)";
    cin >>a;

    cout << "Rate of Interest (in percentage)";
    cin >>b;

    cout << "Time (in years)";
    cin >>c;

    d = (a*b*c)/100;
    cout << "Simple Interest is: " << d << endl;
    return 0;
}
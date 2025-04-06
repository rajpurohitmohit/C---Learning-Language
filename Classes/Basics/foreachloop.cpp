// create a program that calculates the average of different ages

#include <iostream>
using namespace std;

int main() {
    int age[5];
    int sum = 0;
    cout << "Enter the 5 ages:- ";
    cin >> age[0] >> age[1] >> age[2] >> age[3] >> age[4];

    int length = sizeof(age) / sizeof(age[0]);
    for (int i : age){
        sum+=i;
    }
    float avg = sum/length;
    cout << "The average is:- "<< avg << endl;

    return 0;
}
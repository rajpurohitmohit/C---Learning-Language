#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter the age:- ";
    cin >> age;
    if(age<5){
        cout << "The Ticket would be Free";
    }
    else if(age>=5 && age<=18){
        cout << "The Ticket price would be Rs. 100";
    }
    else if(age>=13 && age<=60){
        cout << "The Ticket price would be Rs. 200";
    }
    else{
        cout << "The Ticket price would be Rs. 250";
    }
    return 0;
}
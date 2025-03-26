#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int rollNo;
    float marks;

    void insert(){
        cout << "Enter the name: ";
        cin >> name;
        
        cout << "Enter the marks: ";
        cin >> marks;
        
        cout << "Enter the rollNo: ";
        cin >> rollNo;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Roll No.: " << rollNo << endl;
    }
};
int main() {
    Student S1;
    S1.name;
    S1.rollNo;
    S1.marks;
    S1.insert();
    S1.display();
    return 0;
}
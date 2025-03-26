#include <iostream>
using namespace std;

class Student{
public: 
    int rollNo;
    int regNo;
    string name;
    static int totalbachhe;

    void get_details(){
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the Roll No: ";
        cin >> rollNo;
        cout << "Enter the Registration No: ";
        cin >> regNo;

        totalbachhe++;
    }

    void display_details(){
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Registration No: " << regNo << endl;
    }
    static void display_bachee(){
        cout << "Total No of Students:- " << totalbachhe <<endl;
    }
};

int Student :: totalbachhe;


int main() {
    Student s1, s2;
    s1.get_details();
    s1.display_bachee();
    
    s2.get_details();
    s2.display_bachee();
    return 0;
}
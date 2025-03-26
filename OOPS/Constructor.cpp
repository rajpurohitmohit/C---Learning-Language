#include <iostream>
#include <string>
using namespace std;

class Teacher{ 
private:
    double salary;

public:
    // Attributes / Properties
    string name;
    string subject;
    string department;


    // Constructors
    // Non-parameterized Constructor
    // Teacher(){
    //     department = "Computer Science";
    // }

    // Parameterized Constructor & this Pointer
    Teacher(string name, string subject, string department, double salary){
        this->name = name;
        this->subject = subject;
        this->department = department;
        this->salary = salary;

    }
    // Copy Constructor (Custom)
    Teacher(Teacher &orgObj){ // Call by Reference
        cout << "I am custom Copy Constructor" << endl;
        this->name = orgObj.name;
        this->subject = orgObj.subject;
        this->department = orgObj.department;
        this->salary = orgObj.salary;
    }

    // Member Function / Methods
    void changeDept(string newDept){
        department = newDept;
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Teacher t1("Mohit Rajpurohit", "C++", "Computer Science", 25000); // Constructor call
    // t1.getInfo();

    // Teacher t2(t1); // Default Copy Constructor -invoke
    Teacher t2(t1); // Custom Copy Constructor -invoke
    t2.getInfo();
    return 0;
}
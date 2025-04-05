#include <iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
};

// Single Inheritance
class Student : public Person{
    // Name, Age, Rollno
public:
    int rollno;
};

int main() {
    Student s1;
    s1.name = "Mohit Raj";
    s1.rollno = 44;
    return 0;
}
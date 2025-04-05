#include <iostream>
using namespace std;



class Person{
public:
    string name;
    int age;
};

// Hierarichial Inheritance
class Student : public Person{
public:
    int rollno;
};

class Teacher : public Person{
public:
    string subject;
    double salary;
};

int main() {
    Student s1;
    s1.name = "Tony Stark";
    s1.rollno = 20 ;
    cout << s1.name << endl;
    cout << s1.rollno << endl;
    return 0;
}
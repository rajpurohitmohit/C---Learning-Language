#include <iostream>
using namespace std;

class Person{
public:
    string name;
    int age;
};
// Multi - Level Inheritance
class Student : public Person{
    // Name, Age, Rollno
public:
    int rollno;
};

class GradStudent : public Student{
public:
    string researchArea;
};


int main() {
    GradStudent s1;
    s1.name = "Tony Stark";
    s1.researchArea = "Quantum Physics";
    cout << s1.name;
    cout << s1.researchArea;
    return 0;
}
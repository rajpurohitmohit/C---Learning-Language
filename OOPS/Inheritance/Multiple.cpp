#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int age;
};
// Multiple Inheritance
class Teacher{
public:
    string subject;
    double salary;
};


class TA : public Student, public Teacher{
};


int main() {
    TA s1;
    s1.name = "Tony Stark";
    s1.salary = 200000 ;
    cout << s1.name << endl;
    cout << s1.salary << endl;
    return 0;
}
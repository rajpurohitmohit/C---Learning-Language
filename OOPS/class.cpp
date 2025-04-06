#include <iostream>
#include <string>
using namespace std;

class Teacher{ 
private:
    double salary;
public:
    // properties / attributes
    string name;
    string subject;
    string department;

    // methods
    void changeDept(string newDept){
        department = newDept;
    }

    // Setter
    void setSalary(double s){
        salary = s;
    }
    // Getter
    double getSalary(){
        return salary;
    }
};

int main() {
    Teacher t1; // Constructor call

    t1.name = "Ramesh";
    t1.subject = "Maths";
    t1.department = "Computer Science";
    
    cout << t1.name << endl;

    t1.setSalary(3000);
    cout << t1.getSalary() << endl;

    Teacher t2;
    Teacher t3;
    Teacher t4;

    return 0;
}
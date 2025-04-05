#include <iostream>
using namespace std;

class Student{
public:
    string name;
    double cgpa;
    
    Student(string name, double cgpa){
        this->name = name;
        this->cgpa = cgpa;
    }

    Student(Student &obj){
        this->name = obj.name;
        this->cgpa = obj.cgpa;
    }
    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};


int main() {
    Student s1("Mohit Raj", 8.7);

    Student s2(s1);
    s2.getInfo();
        
    return 0;
}
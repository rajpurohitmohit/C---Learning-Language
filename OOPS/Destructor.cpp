#include <iostream>
using namespace std;

class Student{
public:
    string name;
    double* cgpaPtr;
    
    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    } 

    // Destructor
    ~Student(){
        cout << "Hi, I delete everything";
        delete cgpaPtr; // For deleting Dynamically allocated memory
    }

    void getInfo(){
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};


int main() {
    Student s1("Mohit Raj", 8.7);
    s1.getInfo();
    return 0;
}
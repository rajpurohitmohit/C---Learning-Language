#include <iostream>
using namespace std;

class Student{
public:
    string name;

    // Constructor Overloading
    Student(){
        cout << "Non - Parameterised Constructor" << endl;
    }
    
    Student(string name){
        this-> name = name;
        cout << "Parameterised Constructor" << endl;
    }
    
};

int main() {
    Student s1; // Calling Non-Parameterised Constructor as no parameters were not provided

    Student s2("Mohit Raj");  // Calling Parameterised Constructor as parameters were provided
    return 0;
}
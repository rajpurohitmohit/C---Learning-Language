#include <iostream>
using namespace std;

class Student{
private:
    string name;
    int rollno;
    int marks;

public:
    void setDetails(string n, int r, int m){
        name = n;
        rollno = r;
        marks = m;
    }
    void displayDetails(){
        cout << "Student Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
    void calculateGrade();
    void displayResult();
};

void Student :: calculateGrade(){
    if (marks >= 90 && marks <= 100){
        cout << "Grade A";
    }
    else if (marks >= 75 && marks <= 89){
        cout << "Grade B";
    }
    else if (marks >= 60 && marks <= 74){
        cout << "Grade C";
    }
    else{
        cout << "Grade D";
    }
}

void Student :: displayResult(){
    calculateGrade();
}

int main() {
    Student s1;
    s1.setDetails("Devansu", 56, 79);
    s1.displayDetails();
    s1.displayResult();
    return 0;
}
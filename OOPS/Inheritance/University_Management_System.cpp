#include <iostream>
using namespace std;

class Person{
    string name;
    int age;

public:
    void get_Person(){
        cout<< "Enter Name: ";
        cin >> name;
        cout<< "Enter Age: ";
        cin >> age;
    }

    void display_Person(){
        cout << "\nName:- " << name << endl;
        cout << "Age:- " << age << endl;
    }
};

class Student : public Person{
    string course;
    int rollno;
    
public:
    void get_Student(){
        get_Person();
        cout << "Enter Course: ";
        cin >> course;
        cout << "Enter Roll No.: ";
        cin >> rollno;
    }

    void display_Student(){
        display_Person();
        cout << "Roll No.:- " << rollno << endl;
        cout << "Course:- " << course << endl;
    }
};

class Faculty : public Person{
    string subject;
    int facultyID;
    
public:
    void get_Faculty(){
        get_Person();
        cout << "Enter Subject: ";
        cin >> subject;
        cout << "Enter Faculty ID: ";
        cout << facultyID;
    }

    void display_Faculty(){
        display_Person();
        cout << "Subject:- " << subject << endl;
        cout << "Faculty ID:- " << facultyID << endl;
    }
};

int main() {
    Student s1;
    s1.get_Student();
    s1.display_Student();

    Faculty f1;
    f1.get_Faculty();
    f1.display_Faculty();
    
    return 0;
}
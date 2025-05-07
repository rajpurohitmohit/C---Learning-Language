#include <iostream>
using namespace std;

class EmployeeManagementSystem{
private:
    string name;
    int EmployeeID;
    string role;
    float salary;

public:
    void get_Employee_Details(){
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee ID: ";
        cin >> EmployeeID;
        cout << "Enter Employee Role: ";
        cin >> role;
        cout << "Enter Employee Salary: ";
        cin >> salary;
    }
    void display_Employee_Details(){
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << EmployeeID << endl;
        cout << "Employee Role: " << role << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main() {
    EmployeeManagementSystem e1;
    e1.get_Employee_Details();
    e1.display_Employee_Details();
    return 0;
}
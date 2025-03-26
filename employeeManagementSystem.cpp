#include <iostream>
using namespace std;

class Employee{
    private:
        string name;
        string department;
        float salary;
    public:
        void insert(){
            cout << "Enter the name: ";
            cin >> name;
            
            cout << "Enter the salary: ";
            cin >> salary;
            
            cout << "Enter the Department: ";
            cin >> department;
        }

        void display(){
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
            cout << "Department: " << department << endl;
        }
};
int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    Employee E[n];

    for (int i = 0; i < n; i++){
        E[i].insert();
    }
    cout << "Details of the employees are: " << endl;

    for (int i = 0; i < n; i++){
        E[i].display();
        cout << endl;
    }
    return 0;
}
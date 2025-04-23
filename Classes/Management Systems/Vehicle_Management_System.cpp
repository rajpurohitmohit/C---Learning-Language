#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand;
    int year;

    void get_details(string b, int y) {
        brand = b;
        year = y;
    }

    void display_details() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

class Car : public Vehicle {
public:
    string model;
    string fuelType;

    void get_car_details(string b, int y, string m, string f) {
        get_details(b, y);
        model = m;
        fuelType = f;
    }

    void display_car_details() {
        display_details();
        cout << "Model: " << model << endl;
        cout << "Fuel Type: " << fuelType << endl;
    }
};

int main() {
    Car myCar;
    myCar.get_car_details("Toyota", 2022, "Corolla", "Petrol");
    myCar.display_car_details();
    return 0;
}
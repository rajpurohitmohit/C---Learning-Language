#include <iostream>
using namespace std;

class Order {
    string customerName;
    int orderID;
    int itemCount;

public:
    Order() {
        customerName = "Unknown";
        orderID = 0;
        itemCount = 0;
    }

    Order(string name, int id, int count) {
        customerName = name;
        orderID = id;
        itemCount = count;
    }
    void display_details(){
        cout << "Name: " << customerName << endl;
        cout << "Order ID: " << orderID << endl;
        cout << "Total Items: " << itemCount << endl;
    }
    ~Order() {
        cout << "Order " << orderID << " completed for " << customerName << endl;
    }
};

int main() {;
    Order o1;
    o1.display_details();
    Order o2("Mohit", 101, 3);
    o2.display_details();
    return 0;
}
#include <iostream>
using namespace std;

class Cart{
    string product;
    float price;

public:
    Cart(){
        cout << "Enter the product Details-" << endl;
        cout << "Product: ";
        cin >> product;
        cout << "Price: ";
        cin >> price;
    }
    void displayDetails(){
        cout << "Product: " << price << endl;
    }

    ~Cart(){
        cout << "Product " << product << " Deleted" << endl;
    }
};

int main() {
    Cart c1[5];
    for(int i = 0; i <= 5; i++){
        c1[i].displayDetails();
    }
    return 0;
}
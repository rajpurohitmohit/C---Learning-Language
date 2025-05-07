#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("product.txt");
    if(file.is_open()){
        file << "Product ID: 101\n";
        file << "Product Name: Laptop \n";
        file << "Price: \n";
        file.close();
    }
    else{
        cout << "Error saving the Files";
    }

    
    return 0;
}
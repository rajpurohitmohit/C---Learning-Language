#include <iostream>
using namespace std;

class ABC{
public:

    ABC(){
        cout << "Constructor" << endl;
    }
    
    ~ABC(){
        cout << "Destructor" << endl;
    }
};

int main() {
    if(true){
        static ABC obj;
    }
    cout << "End of Main Function" << endl; 
    return 0;
}
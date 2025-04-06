#include <iostream>
using namespace std;

class Shape{// Abstract Class
        // Pure Virtual Function
        virtual void draw() = 0; // In the child classes draw function must be implemented 
};

class Circle : public Shape{
public:
    void draw(){
        cout << "Drawing a circle";
    }
};
int main() {
    Circle c1;
    c1.draw();
    return 0;
}
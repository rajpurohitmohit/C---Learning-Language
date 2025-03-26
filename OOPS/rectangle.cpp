#include <iostream>
using namespace std;

class Rectangle{
private:
	int length;
	int width;

public:
	void setdimension(){
		cout << "Enter the Length: ";
		cin >> length;
		cout <<  "Enter the width: ";
		cin >> width;
	}
	int area(){
		return length * width;
		}
	int perimeter(){
		return 2 * (length + width);
		}
};
int main(){
	Rectangle r1;
	r1.setdimension();
	cout << "Area:- " << r1.area() << endl;
	cout << "Perimeter:- " << r1.perimeter() << endl;
	return 0;
}
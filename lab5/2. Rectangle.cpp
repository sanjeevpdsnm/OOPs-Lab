#include <iostream>
using namespace std;

class Rectangle {
private : 
    double length;
    double breadth;
public : 
    Rectangle(double l,double b) {
        length = l;
        breadth = b;
    }
    double area() {
        return length * breadth;
    }
    double perimeter() {
        return 2 * (length * breadth);
    }
};

int main() {
    Rectangle R1(2,5);
    cout << "Area = " << R1.area() << endl;
    cout << "Perimeter = " << R1.perimeter() << endl;
    return 0;
}
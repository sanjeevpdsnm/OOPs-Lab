#include <iostream>
using namespace std;

class Circle {
private: 
    double radius;
public: 
    void setRadius(double r) {
        radius = r;
    }
    double getRadius() {
        cout << "Radius (r) = " << radius << endl;
        return radius;
    }

    void area() {
        cout << "Area of the Circle = " << 3.14 * radius * radius << endl;
    }
    void circumference() {
        cout << "Circumference of Circle = " << 2 * 3.14 * radius << endl;
    }
};

int main() {
    Circle c1;
    c1.setRadius(2);
    c1.getRadius();
    c1.area();
    c1.circumference();
    return 0;
}
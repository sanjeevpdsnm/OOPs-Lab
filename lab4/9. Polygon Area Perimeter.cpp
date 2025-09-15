#include <iostream>
#include <cmath>
using namespace std;

class Polygon {
private:
    int sides;
    double length;  
public:
    Polygon(int n, double l) {
        if (n < 3) {
            cout << "A polygon must have at least 3 sides. Setting sides = 3." << endl;
            sides = 3;
        } else {
            sides = n;
        }
        length = (l > 0) ? l : 1; 
    }

    double perimeter() const {
        return sides * length;
    }

    double area() const {
        double areaP = length / (2 * tan(M_PI / sides)); 
        return (perimeter() * areaP) / 2;
    }

    void display() const {
        cout << "\nPolygon with " << sides << " sides, each of length " << length << endl;
        cout << "Perimeter = " << perimeter() << endl;
        cout << "Area = " << area() << endl;
    }
};

int main() {
    int n;
    double l;

    cout << "Enter number of sides: ";
    cin >> n;
    cout << "Enter length of each side: ";
    cin >> l;

    Polygon poly(n, l);
    poly.display();

    return 0;
}


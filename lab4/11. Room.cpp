#include <iostream>
using namespace std;

class Room {
public: 
    double l,b,h;
    void getDimensions() {
        cout << "Length = ";
        cin >> l;
        cout << "breadth = ";
        cin >> b;
        cout << "height = ";
        cin >> h;
    }
    void showDimensions() {
        cout << "Length : " << l << endl;
        cout << "Breadth : " << b << endl;
        cout << "Height : " << h << endl;
    }
    void area() {
        cout << "Area of the base is : " << l*b << endl;
    }
    void volume() {
        cout << "Volume of the Room is : " << l*b*h << endl;
    }
};
int main() {
    Room r1;
    r1.getDimensions();
    r1.showDimensions();
    r1.area();
    r1.volume();
    return 0;
}
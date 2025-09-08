#include <iostream>
using namespace std;

class Rectangle {
public: 
    double length;
    double width;
    
    void area(double length,double width) {
        cout << "length l = " << length << endl;
        cout << "width w = " << width << endl;
        cout << "area a = " << length * width << endl;
    }
};

int main() {
    Rectangle r;
    r.area(3,4);
    return 0;
}
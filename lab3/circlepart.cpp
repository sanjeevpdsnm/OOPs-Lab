#include <iostream>
using namespace std;

void circle(double r) {
    cout << "Radius is " << r << endl;
    cout << "Diameter of the circle " << 2*r << endl;
    cout << "Circumference of the circle " << 2*r*3.14 << endl;
    cout << "Area of the circle " << 3.14*r*r << endl;

}
int main() {
    int n;
    cout << "Enter the radius : ";
    cin >> n;
    circle(n);
    return 0;
}
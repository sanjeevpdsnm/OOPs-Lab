#include <iostream>
using namespace std;

void greatestOfThree(int a,int b,int c) {
    if (a > b && a > c) {
        cout << a << " is greater out of " << a << ", " << b <<  " and " << c << endl; 
    } else if (b > a && b > c) {
        cout << b << " is greater out of " << a << ", " << b <<  " and " << c << endl; 
    } else {
        cout << c << " is greater out of " << a << ", " << b <<  " and " << c << endl; 
    }
}

int main() {
    int a,b,c;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
    cout << "Enter the third number : ";
    cin >> c;
    greatestOfThree(a,b,c);
    return 0;
}
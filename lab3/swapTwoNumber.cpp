#include <iostream>
using namespace std;

void swapTwo(int a, int b) {
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout <<  "After swapping :" << endl;
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
}

int main() {
    int a,b;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
    swapTwo(a,b);
    return 0;
}
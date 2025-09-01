#include <iostream>
using namespace std;

int mul(int a, int b) {
    return a * b;
}

int mul(int a,int b, int c) {
    return a * b *c;
}

int main() {
    int a,b,c;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
    cout << "Enter the third number : ";
    cin >> c;
    cout << a << "x" << b << "= " << mul(a,b) << endl;
    cout <<  a << "x" << b << "x" << c << "= " <<  mul(a,b,c) << endl;
    return 0;
}
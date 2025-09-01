#include <iostream>
using namespace std;

int sumTwo(int a,int b) {
    return a + b;
}

int main() {
    int a;
    int b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    cout << "sum of " << a << " and " << b << " number is : " << sumTwo(a,b) << endl;
    return 0;
}
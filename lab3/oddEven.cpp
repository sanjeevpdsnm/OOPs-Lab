#include <iostream>
using namespace std;

void oddEven(int n) {
    if (n % 2 == 0) {
        cout << n << " is Even." << endl;
    } else {
        cout << n << " is Odd." << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    oddEven(n);
    return 0;
}
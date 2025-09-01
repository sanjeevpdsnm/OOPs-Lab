#include <iostream>
using namespace std;

int fab(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fab(n - 2) + fab(n - 1);
}

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "Fabonacci sequence upto " << n << " = ";
    for (int i = 0; i < n; i++) {
        cout << fab(i) << " ";
    }
    return 0;
}
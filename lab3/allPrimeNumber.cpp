#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n == 2) {
        return true;
    }
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
        return true;
    }
}

int main() {
    int st, end;
    cout << "Enter Starting position : ";
    cin >> st;
    cout << "Enter ending position : ";
    cin >> end;
    cout << "Prime number b/w " << st << " and " << end << " is ";
    for (int i = st + 1; i < end; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
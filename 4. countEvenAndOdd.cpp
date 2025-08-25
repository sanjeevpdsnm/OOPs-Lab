#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int countEven = 0;
    int countOdd = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }
    cout << "Total Number of Even Number in the array is : " << countEven << endl;
    cout << "Total Number of Odd Number in the array is : " << countOdd << endl;
}
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
    
    int largest = arr[0];
    int secondLargest = largest;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
    }

    cout << "Second Largest Element of the array is " << secondLargest << endl;
}
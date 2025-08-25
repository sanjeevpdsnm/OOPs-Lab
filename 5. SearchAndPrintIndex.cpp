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

    int target;
    cout << "Enter the element which you want to search in an Array : ";
    cin >> target;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "Index of the search element " << target << " is " << i;
        }
    }
}
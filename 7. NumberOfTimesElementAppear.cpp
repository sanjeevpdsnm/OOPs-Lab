#include <iostream>
#include <algorithm>
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
    // sort(arr.begin(),arr.end());
    bool alreadyCountElement[n] = {false};
    for (int i = 0; i < n; i++) {
        if (alreadyCountElement[i]) {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                alreadyCountElement[j] = true;
            }
        }
        cout << "Count of " << arr[i] << " in an Array is " << count << endl; 
    }
}
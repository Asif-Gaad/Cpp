#include <iostream>
using namespace std;

int main() {
    int n, searchValue, index = -1;

    cout << "Enter number of elements in array: ";
    cin >> n;

    int arr[n];

    // Input array elements
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Value to search
    cout << "\nEnter the value you want to search: ";
    cin >> searchValue;



    for (int i = 0; i < n; i++) {
        if (arr[i] == searchValue) {
            index = i;
            break;   // stop when found
        }
    }

    // Output result
    if (index != -1) {
        cout << "\nValue found at index: " << index << endl;
    } else {
        cout << "\nValue NOT found in the array." << endl;
    }

    return 0;
}


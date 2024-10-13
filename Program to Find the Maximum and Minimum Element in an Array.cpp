#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[100];  // Assuming the max size of the array is 100

    // Input the elements of the array
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize max and min with the first element of the array
    int max = arr[0];
    int min = arr[0];

    // Find the maximum and minimum element
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Output the maximum and minimum elements
    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;

    return 0;
}

output:--

Enter the size of the array: 4
Enter 5 elements of the array: 4 7 9 12 
Maximum element: 12
Minimum element: 4

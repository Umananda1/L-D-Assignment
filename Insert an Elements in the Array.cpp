#include <iostream>
using namespace std;

int main() {
    int n, pos, element;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[100];  // Assuming the max size of the array is 100

    // Input the elements of the array
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the element to be inserted and the position
    cout << "Enter the element to be inserted: ";
    cin >> element;
    cout << "Enter the position at which to insert the element (1 to " << n + 1 << "): ";
    cin >> pos;

    // Check for valid position
    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position!" << endl;
        return 0;
    }

    // Shift elements to the right from the position
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the given position
    arr[pos - 1] = element;

    // Increase the size of the array
    n++;

    // Output the updated array
    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

Output:----

Enter the size of the array: 4
Enter 5 elements of the array: 11 22 36 42 
Enter the element to be inserted: 15
Enter the position at which to insert the element (1 to 5): 2
Array after insertion:11 15 22 36 42 


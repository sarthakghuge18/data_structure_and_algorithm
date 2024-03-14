#include<iostream>
using namespace std;

void rotate(int arr[], int k, int n) {
    int temp[n];

    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "before the rotation: ";
    display(arr, n);

    cout << "enter the value of k: ";
    int k;
    cin >> k;

    // Ensure k is within the valid range to avoid unnecessary rotations
    k = k % n;

    rotate(arr, k, n);

    cout << "after the rotation: ";
    display(arr, n);

    return 0;
}

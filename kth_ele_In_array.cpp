#include <iostream>
#include <algorithm>

using namespace std;

// Function to find the Kth largest element
int findKthLargest(int arr[], int n, int k) {
    sort(arr, arr + n, greater<int>());
    return arr[k - 1];
}

// Function to find the Kth smallest element
int findKthSmallest(int arr[], int n, int k) {
    sort(arr, arr + n);
    return arr[k - 1];
}

int main() {
    int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;

    cout << "Kth largest element is: " << findKthLargest(arr, n, k) << endl;
    cout << "Kth smallest element is: " << findKthSmallest(arr, n, k) << endl;

    return 0;
}

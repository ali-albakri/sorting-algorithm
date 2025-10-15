#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}

void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = { 23, 232, 45, 53, 234, 45 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before sorting: ";
    printArr(arr, n);

    selectionSort(arr, n);

    cout << "After sorting: ";
    printArr(arr, n);

    return 0;
}

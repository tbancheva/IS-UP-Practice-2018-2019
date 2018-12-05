#include <iostream>
using namespace std;

void sort_array(int *const arr, int length) {
    for (int i = 1; i < length; i++) {
        int j = i ;
        while (j > 0 && arr[j - 1] > arr[j]) {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}

int binary_search(const int *const arr, int len, int x) {
    int left = 0;
    int right = len - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (x == arr[mid]) {
            return mid;
        }
        if (x < arr[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

const int *find_in_array(int *const arr, int length, int x) {
    sort_array(arr, length);
    int index = binary_search(arr, length, x);
    if (index == -1) {
        return nullptr;
    }
    int *ptr = &arr[index];
    return ptr;
}

int main() {
    int arr[] = { 2, 8, 15, 0, 4, 3};
    cout << find_in_array(arr, 6, 15);
    
    return 0;
}
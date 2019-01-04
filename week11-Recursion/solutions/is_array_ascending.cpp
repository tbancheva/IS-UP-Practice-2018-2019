#include <iostream>
using namespace std;

bool is_array_ascending(const int *const arr, int index, int length) {
    bool is_ascending = arr[index - 1] <= arr[index];
    if (index == length - 1) {
        return is_ascending;
    }
    return is_ascending && is_array_ascending(arr, index + 1, length);
}

bool is_array_ascending(const int *const arr, int length) {
    return is_array_ascending(arr, 1, length);
}

void bottomless_recursion(int n) {
    cout << n << endl;
    return bottomless_recursion(n + 1);
}

int main() {
    int arr[] = {5,6,7,8,10};
    bottomless_recursion(0);
    //cout << boolalpha << is_array_ascending(arr, 5) << endl;
    return 0;
}
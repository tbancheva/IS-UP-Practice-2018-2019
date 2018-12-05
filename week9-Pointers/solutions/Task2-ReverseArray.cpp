#include <iostream>
using namespace std;

void swap_values(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void print_array(const int *const arr, int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
}

const int *reverse_array(int *const arr, int length) {
    for (int i = 0; i < length / 2; i++) {
        swap_values(arr[i], arr[length - i - 1]);
    }
    return arr;
}

int main() {
    int array[] = {2, 8, 15, 0, 4, 3};
    print_array(reverse_array(array, 6), 6);

    return 0;
}
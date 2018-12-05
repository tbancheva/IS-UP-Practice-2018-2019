#include <iostream>
using namespace std;

void remove(int *const arr, int &length, int index) {
    for (int i = index; i < length - 1; i++) {
        arr[i] = arr[i + 1];
    }
    length--;
}

bool remove_elements(int *const arr, int length, int n) {
    bool is_element_in_array = false;
    for (int i = 0; i < length; i++) {
        if (arr[i] == n) {
            remove(arr, length, i);
            i--;
            is_element_in_array = true;
        }
    }
    return is_element_in_array;
}

int main() {
    int array[] = {2, 8, 7, -2, 2, 2};
    cout << boolalpha << remove_elements(array, 6, 2);
    return 0;
}
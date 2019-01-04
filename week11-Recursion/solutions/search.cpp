#include <iostream>
using namespace std;

int search(const int *const arr, int element_to_find, int index, int length) {
    if (index < length) {
        if (arr[index] == element_to_find) {
            return index;
        }
        return search(arr, element_to_find, index + 1, length);
    }
    return -1;
}

int main() {
    int arr[] = {1431,1,324,14,312,15};
    int x = -1;
    cout << search(arr, x, 0, 6) << endl;
    return 0;
}
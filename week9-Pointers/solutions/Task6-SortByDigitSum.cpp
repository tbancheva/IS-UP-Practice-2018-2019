#include <iostream>
using namespace std;

int get_digit_sum(int num) {
    int digit_sum = num % 10;
    while (num /= 10) {
        digit_sum += num % 10;
    }
    return digit_sum;
}

bool evaluate_sort_criteria(const int *const arr, int index) {
    return get_digit_sum(arr[index - 1]) > get_digit_sum(arr[index]) ||
            (get_digit_sum(arr[index - 1]) == get_digit_sum(arr[index]) &&
            arr[index - 1] > arr[index]);
}

void sort_by_digit_sum(int *const arr, int length) {
    for (int i = 1; i < length; i++) {
        int j = i;
        while (j > 0 && evaluate_sort_criteria(arr, j)) {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
}

int main() {
    int array[] = {203, 199, 41, 991, 900, 666};
    sort_by_digit_sum(array, 6);
    for (int i = 0; i < 6; i++) {
        cout << array[i] << " ";
    }
    return 0;
}
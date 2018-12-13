#include <iostream>
using namespace std;

int str_length(const char *const string) {
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    return length;
}

void swap_chars(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

void reverse_string(char *const string) {
    int length = str_length(string);
    for (int i = 0; i < length / 2; i++) {
        swap_chars(string[i], string[length - i - 1]);
    }
}

int main() {
    char array[] = "aabgcde";
    reverse_string(array);
    cout << array << endl;
    return 0;
}
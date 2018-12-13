#include <iostream>
using namespace std;

void copy(const char *const input, char *const result, int start_index) {
    for (int i = 0; i < input[i] != '\0'; i++) {
        result[start_index++] = input[i];
    }
}

int str_length(const char *const string) {
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    return length;
}

void concat(const char *const first, const char *const second, char *const result) {
    copy(first, result, 0);
    copy(second, result, str_length(first));
    result[str_length(first) + str_length(second)] = '\0';
}

int main() {
    char first[] = "abc";
    char second[] = "def";
    char result[str_length(first) + str_length(second)];
    concat(first, second, result);// abcdef
    cout << result <<endl;
    return 0;
}
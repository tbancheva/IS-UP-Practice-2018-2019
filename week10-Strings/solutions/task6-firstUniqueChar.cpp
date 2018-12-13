#include <iostream>
using namespace std;

int str_length(const char *const string) {
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    return length;
}


char get_first_unique_char(const char *const string) {
    int length = str_length(string);
    for (int i = 0; i < length; i++) {
        bool is_char_unique = true;
        for (int j = 0; j < length; j++) {
            if (i != j && string[i] == string[j]) {
                is_char_unique = false;
            }
        }
        if (is_char_unique) {
            return string[i];
        }
    }
}

int main() {
    char array[] = "abcde";
    cout << get_first_unique_char(array) << endl;

    return 0;
}
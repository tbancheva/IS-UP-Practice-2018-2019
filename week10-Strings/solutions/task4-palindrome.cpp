#include <iostream>
using namespace std;

int str_length(const char *const string) {
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    return length;
}

bool is_palindrome(const char *const string) {
    int length = str_length(string);
    for (int i = 0; i < length / 2; i++) {
        if (string[i] != string[length - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char palindrome[] = "abababa";
    char random[] = "abca";
    cout << boolalpha << is_palindrome(palindrome) << endl;
    cout << boolalpha <<is_palindrome(random) << endl;
    return 0;
}
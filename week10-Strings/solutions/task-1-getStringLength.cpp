#include<iostream>
using namespace std;

int str_length(const char *const string) {
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char string[100];
    cin >> string;
    cout << str_length(string);
    return 0;
}
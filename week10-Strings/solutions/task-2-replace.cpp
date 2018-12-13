#include<iostream>
using namespace std;

void replaceSymbol(char *const string, char to_be_replaced, char new_symbol) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == to_be_replaced) {
            string[i] = new_symbol;
        }
    }
}

int main() {
    char string[] = "aabcde";
    replaceSymbol(string, 'a', 'f');
    cout << string;
    return 0;
}
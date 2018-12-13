#include <iostream>
using namespace std;

void erase_symbol(const char *input_string, char *const result_string, char character_to_delete) {
    int result_string_index = 0;
    for (int i = 0; input_string[i] != '\0'; i++) {
        if (input_string[i] != character_to_delete) {
            result_string[result_string_index++] = input_string[i];
        }
    }
    result_string[result_string_index] = '\0';
}

int main() {
    char array[] = "aabcfaafde";
    char result[100];
    erase_symbol(array, result, 'x');
    cout << result << endl;
    return 0;
}
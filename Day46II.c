#include <stdio.h>
#include <string.h>

char first_repeating_char(char str[]) {
    int freq[26] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';
        freq[index]++;
        if (freq[index] == 2) {
            return str[i];
        }
    }
    return '\0';
}

int main() {
    char str[] = "stress";
    char result = first_repeating_char(str);
    
    if (result != '\0') {
        printf("Input: %s\nOutput: %c\n", str, result);
    } else {
        printf("Input: %s\nOutput: -1\n", str);
    }
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeVowels(char *str, char *result) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0'; 
}

int main() {
    char input[100];
    char output[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    removeVowels(input, output);

    printf("Output: %s\n", output);

    return 0;
}
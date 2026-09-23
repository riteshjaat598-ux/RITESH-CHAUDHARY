#include <stdio.h>
#include <ctype.h>

void toggleCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}

int main() {
    char str1[] = "Hello";
    
    printf("Input 1: %s\n", str1);
    toggleCase(str1);
    printf("Output 1: %s\n\n", str1);
    
    return 0;
}
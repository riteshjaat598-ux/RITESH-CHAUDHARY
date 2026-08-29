
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char binary[MAX_SIZE];
    char onesComplement[MAX_SIZE];
    int i, isValid = 1;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    int length = strlen(binary);
    for (i = 0; i < length; i++) {
        if (binary[i] == '1') {
            onesComplement[i] = '0';
        } else if (binary[i] == '0') {
            onesComplement[i] = '1';
        } else {
    
            printf("Error: Invalid binary digit '%c' detected.\n", binary[i]);
            isValid = 0;
            break;
        }
    }

    onesComplement[length] = '\0';

    if (isValid) {
        printf("Original Binary : %s\n", binary);
        printf("1's Complement  : %s\n", onesComplement);
    }

    return 0;
}
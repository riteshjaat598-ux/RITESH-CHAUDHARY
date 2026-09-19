#include <stdio.h>

int countCharacters(const char *str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    char str[1000]; 

    printf("Enter a string: "); 
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    int len = countCharacters(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    if (len == 0) {
        len = 1;
    }

    printf("Length: %d\n", len);
    return 0;
}
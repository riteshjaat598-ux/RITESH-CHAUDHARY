#include <stdio.h>
#include <string.h>

void printAllSubstrings(char *str) {
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
}

int main() {
    char str[] = "abc";
    
    printf("The substrings of \"%s\" are:\n", str);
    printAllSubstrings(str);
    
    return 0;
}

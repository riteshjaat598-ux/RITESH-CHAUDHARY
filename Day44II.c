#include <stdio.h>
#include <string.h>

void replaceSpaces(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
}
int main() {
    char str[]="HELLO WORLD" ;
    
    replaceSpaces(str);
    printf("%s\n", str);
    return 0;
}
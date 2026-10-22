#include <stdio.h>
#include <ctype.h>

void convertToSentenceCase(char *str) {
    int startNewSentence = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
            startNewSentence = 1;
        } 
        else if (isalpha((unsigned char)str[i])) {
            if (startNewSentence) {
                str[i] = toupper((unsigned char)str[i]);
                startNewSentence = 0; 
            } else {
                str[i] = tolower((unsigned char)str[i]);
            }
        }
    }
}

int main() {
    char str[500];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        convertToSentenceCase(str);

        printf("Sentence Case: %s", str);
    }

    return 0;
}

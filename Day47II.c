#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100] = "I love programming";
    char largest_word[100];
    int max_len = 0;
    
    char *word = strtok(sentence, " ");
    while (word != NULL) {
        int len = strlen(word);
        if (len > max_len) {
            max_len = len;
            strcpy(largest_word, word);
        }
        word = strtok(NULL, " ");
    }
    
    printf("Longest word: %s\n", largest_word);
    return 0;
}


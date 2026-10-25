#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    int ch;
    
    long long characters = 0;
    long long words = 0;
    long long lines = 0;
    
    int in_word = 0; 
    printf("Enter the filename: ");
    if (scanf("%99s", filename) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++; 
        if (ch == '\n') {
            lines++;
        }

        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r') {
            in_word = 0; 
        } 
        else if (in_word == 0) {
            in_word = 1;
            words++;
        }
    }

    if (characters > 0 && ch != '\n') {
        lines++;
    }

    fclose(file);

    printf("\n--- File Statistics ---\n");
    printf("Total Characters : %lld\n", characters);
    printf("Total Words      : %lld\n", words);
    printf("Total Lines      : %lld\n", lines);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    int ch;

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input.txt");
        return EXIT_FAILURE;
    }

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output.txt");
        fclose(inputFile); 
        return EXIT_FAILURE;
    }

    while ((ch = fgetc(inputFile)) != EOF) {
        fputc(toupper(ch), outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Text successfully converted and written to output.txt\n");
    return EXIT_SUCCESS;
}

#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100], ch;

    printf("Enter the filename: ");
    scanf("%99s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist.\n");
    } else {
        printf("File content:\n");

        while ((ch = fgetc(fp)) != EOF) {
            printf("%c", ch);
        }

        fclose(fp);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char buffer[1024];

    file = fopen("output.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter a line of text to append: ");

    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        fputs(buffer, file);
        printf("Text successfully appended.\n");
    } else {
        printf("Error reading input.\n");
    }

    fclose(file);

    return 0;
}

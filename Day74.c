#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *source_file, *dest_file;
    char source_path[256];
    char dest_path[256];
    int ch; 

    printf("Enter the source filename: ");
    if (fgets(source_path, sizeof(source_path), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }
    source_path[strcspn(source_path, "\n")] = '\0';

    printf("Enter the destination filename: ");
    if (fgets(dest_path, sizeof(dest_path), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }
    dest_path[strcspn(dest_path, "\n")] = '\0';

    source_file = fopen(source_path, "r");
    if (source_file == NULL) {
        perror("Error opening source file");
        return 1;
    }

    dest_file = fopen(dest_path, "w");
    if (dest_file == NULL) {
        perror("Error creating destination file");
        fclose(source_file);
        return 1;
    }

    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, dest_file);
    }

    fclose(source_file);
    fclose(dest_file);

    printf("File copied successfully from '%s' to '%s'.\n", source_path, dest_path);
    return 0;
}

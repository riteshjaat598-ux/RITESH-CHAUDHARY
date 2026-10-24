#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
   
    char buffer[256];
 
    file = fopen("info.txt", "r");
    
    if (file == NULL) {
        printf("Error: Could not open info.txt\\n");
        return 1;
    }
    
    printf("Contents of info.txt:\\n");
    printf("---------------------\\n");
 
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
   
    fclose(file);
    
    return 0;
}

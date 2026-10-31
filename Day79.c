#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    int current_number;
    long long sum = 0; 
    int count = 0;

    while (fscanf(file, "%d", &current_number) == 1) {
        sum += current_number;
        count++;
    }

    fclose(file);

    if (count > 0) {
        double average = (double)sum / count; 
        
        printf("Total numbers read: %d\n", count);
        printf("Sum:                %lld\n", sum);
        printf("Average:            %.2f\n", average);
    } else {
        printf("The file did not contain any valid integers.\n");
    }

    return 0;
}

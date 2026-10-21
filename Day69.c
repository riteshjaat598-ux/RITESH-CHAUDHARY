#include <stdio.h>
#include <stdlib.h>

#define MAX_VAL 100000 

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    int *freq = (int *)calloc(MAX_VAL, sizeof(int)); 

    if (arr == NULL || freq == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    
    int repeatedElement = -1;
    int found = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (!found) {
            if (arr[i] >= 0 && arr[i] < MAX_VAL) {
                freq[arr[i]]++;
                if (freq[arr[i]] > 1) {
                    repeatedElement = arr[i];
                    found = 1; 
                }
            }
        }
    }

    if (found) {
        printf("The repeated element is: %d\n", repeatedElement);
    } else {
        printf("No repeated element found.\n");
    }

    free(arr);
    free(freq);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter the size of the array (n): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid array size.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers (between 0 and %d with one missing):\n", n, n);
    int actual_sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actual_sum += arr[i]; 
    }

    long long expected_sum = (long long)n * (n + 1) / 2;

    int missing_number = (int)(expected_sum - actual_sum);

    printf("The missing number is: %d\n", missing_number);

    free(arr);

    return 0;
}

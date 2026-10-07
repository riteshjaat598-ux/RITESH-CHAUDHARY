#include <stdio.h>
#include <stdlib.h>

void findNextGreaterElement(int arr[], int n) {
    int *result = (int *)malloc(n * sizeof(int));
    int *stack = (int *)malloc(n * sizeof(int));
    int top = -1;
    for (int i = n - 1; i >= 0; i--) {
        while (top >= 0 && stack[top] <= arr[i]) {
            top--;
        }
        if (top >= 0) {
            result[i] = stack[top];
        } else {
            result[i] = -1;
        }
        stack[++top] = arr[i];
    }
    printf("Next Greater Elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d -> %d\n", arr[i], result[i]);
    }
    free(result);
    free(stack);
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findNextGreaterElement(arr, n);

    free(arr);
    return 0;
}

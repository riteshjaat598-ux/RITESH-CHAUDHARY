#include <stdio.h>
#include <stdlib.h>

void findPreviousGreater(int arr[], int n) {
    int* stack = (int*)malloc(n * sizeof(int));
    int top = -1; 

    printf("Previous Greater Elements:\n");

    for (int i = 0; i < n; i++) {
        while (top >= 0 && stack[top] <= arr[i]) {
            top--;
        }

        if (top == -1) {
            printf("-1 ");
        } else {
            printf("%d ", stack[top]);
        }

        stack[++top] = arr[i];
    }
    printf("\n");

    free(stack);
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int* arr = (int*)malloc(n * sizeof(int));
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    findPreviousGreater(arr, n);

    free(arr);
    return 0;
}

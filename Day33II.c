#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, value, i;
    printf("Enter number of elements in the sorted array: ");
    scanf("%d", &n);

    if (n >= MAX_SIZE) {
        printf("Array is full. Cannot insert more elements.\n");
        return 1;
    }
    printf("Enter %d sorted elements (in ascending order):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    i = n - 1;
    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = value;
    n++;
    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
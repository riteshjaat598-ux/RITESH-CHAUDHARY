#include <stdio.h>

int main() {
    int arr[100];
    int size, i, deleteIndex;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element at index [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the index you want to delete (starts from 0): ");
    scanf("%d", &deleteIndex);

    if (deleteIndex >= 0 && deleteIndex < size) {
        for (i = deleteIndex; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
        printf("\nArray after deletion:\n");
        for (i = 0; i < size; i++) {
            printf("Index [%d]: %d\n", i, arr[i]);
        }
    } else {
        printf("Error: Invalid index! Please enter a value between 0 and %d.\n", size - 1);
    }

    return 0;
}
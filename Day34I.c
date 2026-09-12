#include <stdio.h>

int main() {
    int arr[100];
    int size, i, position, element;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where you want to insert the element (1 to %d): ", size + 1);
    scanf("%d", &position);
    
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    if (position < 1 || position > size + 1) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", size + 1);
    } else {
        for (i = size; i >= position; i--) {
            arr[i] = arr[i - 1];
        }
        arr[position - 1] = element;
        size++;
        printf("Resulting array is:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
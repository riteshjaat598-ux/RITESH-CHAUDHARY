#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Explicitly assigned values:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: %d\n", i, arr[i]);
    }

    return 0;
}

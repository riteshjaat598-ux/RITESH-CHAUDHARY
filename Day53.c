#include <stdio.h>

int findPivotIndex(int arr[], int size) {
    int totalSum = 0;
    int leftSum = 0;

    for (int i = 0; i < size; i++) {
        totalSum += arr[i];
    }

    for (int i = 0; i < size; i++) {
        if (leftSum == totalSum - leftSum - arr[i]) {
            return i; 
        }
        leftSum += arr[i];
    }

    return -1; 
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1.\n");
        return 0;
    }

    int arr[n];

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int pivotIndex = findPivotIndex(arr, n);

    if (pivotIndex != -1) {
        printf("%d\n", pivotIndex);
    } else {
        printf("-1.\n");
    }

    return 0;
}

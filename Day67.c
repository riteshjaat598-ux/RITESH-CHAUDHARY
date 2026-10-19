#include <stdio.h>

void mergeSortedArrays(int arr1[], int m, int arr2[], int n, int merged[]) {
    int i = 0;
    int j = 0; 
    int k = 0; 

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n) {
        merged[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int m, n;

    printf("Enter the size of the first sorted array (m): ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter %d sorted elements for the first array: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second sorted array (n): ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter %d sorted elements for the second array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[m + n];

    mergeSortedArrays(arr1, m, arr2, n, merged);

    printf("\nThe merged sorted array is: \n");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}

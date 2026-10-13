#include <stdio.h>
#include <stdlib.h>

void printFirstNegativeOfWindow(int arr[], int n, int k) {
    int *queue = (int *)malloc(n * sizeof(int));
    int head = 0, tail = 0;

    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            queue[tail++] = i; 
        }
    }

    for (int i = k; i < n; i++) {
        if (head < tail) {
            printf("%d ", arr[queue[head]]);
        } else {
            printf("0 ");
        }

        while (head < tail && queue[head] <= i - k) {
            head++;
        }

        if (arr[i] < 0) {
            queue[tail++] = i;
        }
    }

    if (head < tail) {
        printf("%d\n", arr[queue[head]]);
    } else {
        printf("0\n");
    }

    free(queue);
}

int main() {
    int n, k;

    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 1;
    }

    printf("Enter window size (k): ");
    if (scanf("%d", &k) != 1 || k > n || k <= 0) {
        printf("Invalid window size.\n");
        free(arr);
        return 1;
    }

    printf("Output: ");
    printFirstNegativeOfWindow(arr, n, k);

    free(arr);
    return 0;
}

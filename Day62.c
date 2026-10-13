#include <stdio.h>
#include <limits.h>

int maxSubarraySum(int arr[], int n) {
    int max_so_far = arr[0];
    int curr_max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > curr_max + arr[i]) {
            curr_max = arr[i];
        } else {
            curr_max = curr_max + arr[i];
        }

        if (curr_max > max_so_far) {
            max_so_far = curr_max;
        }
    }
    
    return max_so_far;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_sum = maxSubarraySum(arr, n);
    printf("Maximum sum of contiguous subarray: %d\n", max_sum);

    return 0;
}

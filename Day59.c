#include <stdio.h>

long long maxSubarraySum(int arr[], int n, int k) {
    if (n < k) {
        printf("Invalid input: k cannot be greater than the array size.\n");
        return -1;
    }

    long long current_sum = 0;
    
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    long long max_sum = current_sum;

    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    return max_sum;
}

int main() {
    int n, k;
    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k (subarray size): ");
    if (scanf("%d", &k) != 1 || k <= 0) {
        printf("Invalid value for k.\n");
        return 1;
    }

    long long result = maxSubarraySum(arr, n, k);
    if (result != -1) {
        printf("The maximum sum of all subarrays of size %d is: %lld\n", k, result);
    }

    return 0;
}

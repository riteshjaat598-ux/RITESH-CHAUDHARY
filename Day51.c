#include <stdio.h>

int findFirst(int nums[], int size, int target) {
    int low = 0, high = size - 1;
    int firstIdx = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            firstIdx = mid; 
            high = mid - 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return firstIdx;
}

int findLast(int nums[], int size, int target) {
    int low = 0, high = size - 1;
    int lastIdx = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            lastIdx = mid;  
            low = mid + 1; 
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return lastIdx;
}

int main() {
    int size, target;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int nums[size];

    printf("Enter %d sorted integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
        
        if (i > 0 && nums[i] < nums[i - 1]) {
            printf("Warning: The array must be sorted. Element at index %d breaks the order.\n", i);
            return 1;
        }
    }

    printf("Enter the target value to search for: ");
    scanf("%d", &target);

    int first = findFirst(nums, size, target);
    int last = findLast(nums, size, target);

    printf("\nOutput: ");
    if (first == -1) {
        printf("\"-1,-1\"\n");
    } else {
        printf("%d,%d\n", first, last);
    }

    return 0;
}



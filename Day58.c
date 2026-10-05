#include <stdio.h>
#include <stdlib.h>

int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    
    int* answer = (int*)malloc(numsSize * sizeof(int));
    if (answer == NULL) {
        return NULL; 
    }

    int leftProduct = 1;
    for (int i = 0; i < numsSize; i++) {
        answer[i] = leftProduct;
        leftProduct *= nums[i];
    }

    int rightProduct = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        answer[i] *= rightProduct;
        rightProduct *= nums[i];
    }

    return answer;
}

int main() {
    int nums1[] = {1, 2, 3, 4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int returnSize1;
    
    int* result1 = productExceptSelf(nums1, size1, &returnSize1);
    
    printf("Input: [1, 2, 3, 4]\nOutput: [");
    for (int i = 0; i < returnSize1; i++) {
        printf("%d", result1[i]);
        if (i < returnSize1 - 1) printf(", ");
    }
    printf("]\n\n");
    free(result1); 

    int nums2[] = {-1, 1, 0, -3, 3};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int returnSize2;
    
    int* result2 = productExceptSelf(nums2, size2, &returnSize2);
    
    printf("Input: [-1, 1, 0, -3, 3]\nOutput: [");
    for (int i = 0; i < returnSize2; i++) {
        printf("%d", result2[i]);
        if (i < returnSize2 - 1) printf(", ");
    }
    printf("]\n");
    free(result2);

    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; 
        }
        left++;
        right--;
    }
    return true; 
}

int main() {
    char str[100];

    printf("Enter a string: ");
    if (scanf("%99s", str) == 1) { 
        if (isPalindrome(str)) {
            printf("Palindrome\n");
        } else {
            printf("Not palindrome\n");
        }
    }

    return 0;
}
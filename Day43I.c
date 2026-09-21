#include <stdio.h>
#include <string.h>

void reverseString(char *s) {
    int left = 0;
    int right = strlen(s) - 1;
    char temp;

    while (left < right) {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char s[] = "abcd";
    reverseString(s);
    printf("Input: abcd\n");
    printf("Output: %s\n", s);
    return 0;
}
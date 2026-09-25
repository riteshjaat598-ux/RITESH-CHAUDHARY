#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool areAnagrams(char str1[], char str2[]) {
    int count[256] = {0};
    int i;

    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    for (i = 0; str1[i] && str2[i]; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    // Sample Test Case 1
    char s1[] = "listen";
    char s2[] = "silent";
    if (areAnagrams(s1, s2))
        printf("Input: %s %s -> Output: Anagrams\n", s1, s2);
    else
        printf("Input: %s %s -> Output: Not anagrams\n", s1, s2);
    char s3[] = "hello";
    char s4[] = "world";
    if (areAnagrams(s3, s4))
        printf("Input: %s %s -> Output: Anagrams\n", s3, s4);
    else
        printf("Input: %s %s -> Output: Not anagrams\n", s3, s4);

    return 0;
}

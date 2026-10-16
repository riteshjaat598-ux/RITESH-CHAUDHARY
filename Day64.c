#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int maxLength = 0;
    int start = 0;
    int lastSeen[256];
    for (int i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }
    
    for (int end = 0; end < n; end++) {
        if (lastSeen[(unsigned char)s[end]] >= start) {
            start = lastSeen[(unsigned char)s[end]] + 1;
        }
    
        lastSeen[(unsigned char)s[end]] = end;
        
        int currentLength = end - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }
    
    return maxLength;
}

int main() {
    char s[100000]; 
    
    printf("Enter a string: ");
    if (scanf("%[^\n]", s) != 1) {
        s[0] = '\0'; 
    }
    
    int result = lengthOfLongestSubstring(s);
    printf("Length of the longest substring without repeating characters: %d\n", result);
    
    return 0;
}

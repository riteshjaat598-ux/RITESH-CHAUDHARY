#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isRotation(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
  
    if (len1 != len2) {
        return false;
    }

    char temp[len1 * 2 + 1];
    strcpy(temp, s1);
    strcat(temp, s1);
   
    if (strstr(temp, s2) != NULL) {
        return true;
    }
    
    return false;
}

int main() {
    char s1_1[] = "abcde";
    char s2_1[] = "deabc";
    printf("Input 1: %s %s -> Output 1: %s\n", s1_1, s2_1, isRotation(s1_1, s2_1) ? "Rotation" : "Not rotation");

    char s1_2[] = "abc";
    char s2_2[] = "acb";
    printf("Input 2: %s %s -> Output 2: %s\n", s1_2, s2_2, isRotation(s1_2, s2_2) ? "Rotation" : "Not rotation");

    return 0;
}

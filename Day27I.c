#include <stdio.h>

int main() {
    int i, j;
    int stars = 9;

    for (i = 1; i <= stars; i += 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (i = stars - 2; i >= 1; i -= 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
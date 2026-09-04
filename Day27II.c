#include <stdio.h>

int main() {
    int n = 4;
    int i, j, a;

    for (i = 1; i <= n; i++) {
        for (a = 1; a <= n - i; a++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) {
        for (a= 1; a<= n - i; a++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
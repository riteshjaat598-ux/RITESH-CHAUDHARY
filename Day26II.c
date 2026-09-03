#include <stdio.h>

int main() {
    int n = 5;
    int i, j;

    for (i = 1; i <= n; i++) {
        int stars = (i <= (n + 1) / 2) ? (2 * i - 1) : (2 * (n - i + 1) - 1);
        
        for (j = 1; j <= stars; j++) {
            printf("*\n");
        }
        if (i < n) {
            printf("\n");
        }
    }

    return 0;
}
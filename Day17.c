#include <stdio.h>

int main() {
    int n ;
    printf("ENTER THE INTEGER:");
    scanf("%d",&n);
    int count = 0;

    if (n <= 1) {
        printf("%d is NOT prime", n);
    }
    else {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                count++;
        }

        if (count == 2)
            printf("%d is prime", n);
        else
            printf("%d is NOT prime", n);
    }

    return 0;
}
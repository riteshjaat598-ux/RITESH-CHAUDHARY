#include <stdio.h>

int main() {
    int a;
    long product = 1; 
    int even = 0;

    printf("Enter the value of n: ");
    scanf("%d", &a);

    for (int i = 2; i <= a; i += 2) {
        product *= i;
        even = 1;
    }

    if (even && a >= 2) {
        printf("The product of even numbers from 1 to %d is: %lld\n", a, product);
    } else {
        printf("There are no even numbers in the range 1 to %d.\n", a);
    }

    return 0;
}
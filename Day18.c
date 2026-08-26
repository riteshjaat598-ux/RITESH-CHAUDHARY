#include <stdio.h>

int main() {
    int num1, num2, temp;
    int original_num1, original_num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    original_num1 = num1;
    original_num2 = num2;

    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    printf("The HCF (GCD) of %d and %d is: %d\n", original_num1, original_num2, num1);

    return 0;
}
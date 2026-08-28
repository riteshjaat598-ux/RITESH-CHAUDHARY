#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, temp, remainder, sum = 0;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    temp = abs(num); 

    while (temp > 0) {
        remainder = temp % 10;  
        sum += remainder;       
        temp /= 10;            
    }
    printf("The sum of the digits of %d is: %d\n", num, sum);

    return 0;
}
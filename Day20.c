#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, temp, digit;
    long product = 1;
    int has_odd = 0; 

    printf("Enter any number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    
    temp = abs(num);

    if (temp == 0) {
        has_odd = 0;
    } else {
        while (temp > 0) {
            digit = temp % 10; 

        
            if (digit % 2 != 0) {
                product *= digit; 
                has_odd = 1;      
            }

            temp /= 10; 
        }
    }
    if (has_odd) {
        printf("The product of the odd digits of %d is: %lld\n", num, product);
    } else {
        printf("There are no odd digits in %d.\n", num);
    }

    return 0;
}
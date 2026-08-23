#include <stdio.h>

int main() {
    int a, b, odd, sum = 0;
    printf("Enter the number of terms (n): ");
    scanf("%d", &a);
    
    for (b = 1; b <= a; b++) {
       odd = 2 * b - 1;
        printf("", odd);
        sum += odd;   
    }
    
    printf("\nThe sum of the first %d odd numbers is: %d\n", a, sum);

    return 0;
}
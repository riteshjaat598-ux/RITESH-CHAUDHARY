#include <stdio.h>

int main() {
    int num, originalNum;
    int firstDigit, lastDigit;
    int multiplier = 1;

    printf("Enter any integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    originalNum = num;

    lastDigit = num % 10;

    int temp = num;
    while (temp >= 10) {
        temp /= 10;
        multiplier *= 10;
    }
    
    firstDigit = temp;

    int middlePart = (originalNum % multiplier) / 10;
    int swappedNum = (lastDigit * multiplier) + (middlePart * 10) + firstDigit;
    printf("Original number: %d\n", originalNum);
    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
#include <stdio.h>

int main() {
    int days;
    int fine = 0;

    printf("Enter the number of days late: ");
    if (scanf("%d", &days) != 1 || days < 0) {
        printf("Invalid input. Days late cannot be negative.\n");
        return 1;
    }

    if (days == 0) {
        printf("No fine. Book returned on time.\n");
    } 
    else if (days <= 5) {
        fine = days * 2;
        printf("Total fine is: ₹%d\n", fine);
    } 
    else if (days <= 10) {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Total fine is: ₹%d\n", fine);
    } 
    else if (days <= 30) {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Total fine is: ₹%d\n", fine);
    } 
    else {
        printf("Late duration exceeded 30 days. Membership Cancelled.\n");
    }

    return 0;
}
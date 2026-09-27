#include <stdio.h>

int main() {
    int day, year;
    int month;

    if (scanf("%d/%d/%d", &day, &month, &year) == 3) {
        if (month == 4) {
            printf("%02d-Apr-%d\n", day, year);
        } else {
            printf("Error: This program specifically converts April (04) dates.\n");
        }
    } else {
        printf("Invalid input format. Please use dd/04/yyyy.\n");
    }

    return 0;
}

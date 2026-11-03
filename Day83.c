#include <stdio.h>

enum Month {
    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

void printDaysInMonth(enum Month month) {
    switch (month) {
        case JAN:
        case MAR:
        case MAY:
        case JUL:
        case AUG:
        case OCT:
        case DEC:
            printf("Month %d has 31 days\n", month);
            break;
           
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("Month %d has 30 days\n", month);
            break;
            
        case FEB:
            printf("Month %d has 28 or 29 days (depending on leap year)\n", month);
            break;
            
        default:
            printf("Invalid month!\n");
            break;
    }
}

int main() {
    printf("--- Days in Each Month ---\n");
    
    for (enum Month m = JAN; m <= DEC; m++) {
        printDaysInMonth(m);
    }

    return 0;
}

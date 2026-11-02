#include <stdio.h>

enum Day {
    SUNDAY,    
    MONDAY,    
    TUESDAY,   
    WEDNESDAY, 
    THURSDAY,  
    FRIDAY,    
    SATURDAY   
};

int main() {
    const char* dayNames[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", 
        "THURSDAY", "FRIDAY", "SATURDAY"
    };

    printf("Days of the week and their integer values:\n");
    printf("------------------------------------------\n");

    for (int i = SUNDAY; i <= SATURDAY; i++) {
        printf("%s = %d\n", dayNames[i], i);
    }

    return 0;
}

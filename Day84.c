#include <stdio.h>

typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;

void printStatusMessage(Status currentStatus) {
    switch (currentStatus) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Error: Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Warning: Operation timed out.\n");
            break;
        default:
            printf("Unknown status.\n");
            break;
    }
}

int main() {
    Status testStatus = SUCCESS;
    printStatusMessage(testStatus);

    testStatus = TIMEOUT;
    printStatusMessage(testStatus);

    return 0;
}

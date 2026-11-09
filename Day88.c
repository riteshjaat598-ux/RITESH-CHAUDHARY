#include <stdio.h>

typedef enum {
    RED,
    YELLOW,
    GREEN,
    COUNT 
} COLOUR;

const char* COLOUR_names[] = {
    "RED",
    "YELLOW",
    "GREEN"
};

int main() {
    for (int i = 0; i < COUNT; i++) {
        printf("Name: %-10s | Value: %d\n", COLOUR_names[i], i);
    }

    return 0;
}

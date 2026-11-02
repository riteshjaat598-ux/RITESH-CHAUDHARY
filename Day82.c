#include <stdio.h>

typedef enum {
    RED,
    YELLOW,
    GREEN
} TrafficLight;

int main() {
    TrafficLight currentLight = RED;

    switch (currentLight) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid light color\n");
            break;
    }

    return 0;
}

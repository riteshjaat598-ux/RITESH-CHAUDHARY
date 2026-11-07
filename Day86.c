#include <stdio.h>

enum MenuChoice {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int choice;
    double num1, num2, result;

    printf("--- Calculator Menu ---\n");
    printf("%d. Add\n", ADD);
    printf("%d. Subtract\n", SUBTRACT);
    printf("%d. Multiply\n", MULTIPLY);
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    if (choice < ADD || choice > MULTIPLY) {
        printf("Error: Invalid menu choice.\n");
        return 1; 
    }

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch ((enum MenuChoice)choice) {
        case ADD:
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case SUBTRACT:
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case MULTIPLY:
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        default:
            printf("Error: Operation not supported.\n");
            break;
    }

    return 0;
}

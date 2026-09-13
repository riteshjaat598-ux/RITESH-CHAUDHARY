#include <stdio.h>

int main() {
    int rows, colm;

    if (scanf("%d %d", &rows, &colm) != 2) {
        return 1;
    }

    int matrix[rows][colm];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colm; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colm; j++) {
            printf("%d", matrix[i][j]);
            if (j < colm - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;

    if (scanf("%d %d", &rows, &cols) != 2) {
        return 1;
    }
    
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int diagonalSize = (rows < cols) ? rows : cols;
    bool isDistinct = true;

    for (int i = 0; i < diagonalSize; i++) {
        for (int j = i + 1; j < diagonalSize; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = false;
                break;
            }
        }
        if (!isDistinct) {
            break;
        }
    }

    if (isDistinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}
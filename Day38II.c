#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;
    if (scanf("%d %d", &rows, &cols) != 2) {
        return 1;
    }

    if (rows != cols) {
        printf("False\n");
        return 0;
    }

    int mat[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    bool isSymmetric = true;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] != mat[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }
    if (isSymmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
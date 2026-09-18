#include <stdio.h>
#include <stdlib.h>

void diagonalTraverse(int **mat, int rows, int cols) {
    if (rows == 0 || cols == 0) {
        printf("Matrix is empty.\n");
        return;
    }

    int total = rows * cols;
    int *result = (int *)malloc(total * sizeof(int));
    if (!result) {
        printf("Memory allocation failed.\n");
        return;
    }

    int r = 0, c = 0, dir = 1; 
    for (int i = 0; i < total; i++) {
        result[i] = mat[r][c];

        if (dir == 1) {
            if (c == cols - 1) { 
                r++;
                dir = -1;
            } else if (r == 0) { 
                c++;
                dir = -1;
            } else { 
                r--;
                c++;
            }
        }
        else {
            if (r == rows - 1) { 
                c++;
                dir = 1;
            } else if (c == 0) { 
                r++;
                dir = 1;
            } else {
                r++;
                c--;
            }
        }
    }

    for (int i = 0; i < total; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);
}

int main() {
    int rows, cols;

    printf("Enter rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        printf("Invalid input. Please enter positive integers.\n");
        return 1;
    }
    int **mat = (int **)malloc(rows * sizeof(int *));
    if (!mat) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for (int i = 0; i < rows; i++) {
        mat[i] = (int *)malloc(cols * sizeof(int));
        if (!mat[i]) {
            printf("Memory allocation failed.\n");
            return 1;
        }
    }

    printf("Enter %d elements:\n", rows * cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &mat[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    printf("Diagonal Zigzag Traversal:\n");
    diagonalTraverse(mat, rows, cols);
    for (int i = 0; i < rows; i++) {
        free(mat[i]);
    }
    free(mat);

    return 0;
}

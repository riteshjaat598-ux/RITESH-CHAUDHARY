#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
    if (scanf("%d %d", &rows1, &cols1) != 2) return 0;
    
    int matrix1[rows1][cols1];
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    if (scanf("%d %d", &rows2, &cols2) != 2) return 0;
    
    int matrix2[rows2][cols2];
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrices cannot be added due to dimension mismatch.\n");
        return 0;
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d ", matrix1[i][j] + matrix2[i][j]);
        }
    }
    printf("\n");
    
    return 0;
}
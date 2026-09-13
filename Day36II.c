#include <stdio.h>

int main() {
    int rows, cols;

    if (scanf("%d %d", &rows, &cols) != 2) {
        return 1;
    }
    
    int matrix[rows][cols];
    long long sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("%lld\n", sum);
    
    return 0;
}
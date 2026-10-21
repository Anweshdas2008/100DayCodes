// Add two matrices.

#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    int rows, cols;
    int matrixA[MAX_ROWS][MAX_COLS];
    int matrixB[MAX_ROWS][MAX_COLS];
    int sumMatrix[MAX_ROWS][MAX_COLS];

    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0 || rows > MAX_ROWS) {
        printf("Invalid number of rows.\n");
        return 1;
    }

    printf("Enter the number of columns: ");
    if (scanf("%d", &cols) != 1 || cols <= 0 || cols > MAX_COLS) {
        printf("Invalid number of columns.\n");
        return 1;
    }

    printf("\nEnter elements for the first matrix (Indices start at 0):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("MatrixA[%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("\nEnter elements for the second matrix (Indices start at 0):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("MatrixB[%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    printf("\nResultant Sum Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

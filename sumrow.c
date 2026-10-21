// Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rowSum[MAX_ROWS];
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("\nEnter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    printf("\n--- Row-wise Sums ---\n");
    for (i = 0; i < rows; i++) {
        printf("Sum of row %d = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}

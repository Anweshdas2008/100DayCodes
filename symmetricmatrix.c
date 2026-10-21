// Check if a matrix is symmetric.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    
    printf("Enter the number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    if (rows != cols) {
        printf("The matrix is NOT symmetric (it must be a square matrix).\n");
        return 0;
    }

    int matrix[rows][cols];

    printf("Enter elements of the %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input element.\n");
                return 1;
            }
        }
    }

    int isSymmetric = 1; 
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    if (isSymmetric) {
        printf("The given matrix is a Symmetric Matrix.\n");
    } else {
        printf("The given matrix is NOT a Symmetric Matrix.\n");
    }

    return 0;
}

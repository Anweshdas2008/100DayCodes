// Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nFull Diagonal Traversal: ");

    for (int k = 0; k < cols; k++) {
        int i = 0;     
        int j = k;     
        while (i < rows && j >= 0) {
            printf("%d ", mat[i][j]);
            i++;       
            j--;       
        }
    }

    for (int k = 1; k < rows; k++) {
        int i = k;          
        int j = cols - 1;   
        while (i < rows && j >= 0) {
            printf("%d ", mat[i][j]);
            i++;       
            j--;       
        }
    }

    printf("\n");
    return 0;
}

// Find the transpose of a matrix.

#include <stdio.h>

int main() {
    int m, n;
    
    printf("Enter rows and columns: ");
    if (scanf("%d %d", &m, &n) != 2 || m <= 0 || n <= 0 || m > 100 || n > 100) {
        printf("Invalid dimensions.\n");
        return 1;
    }

    int matrix[100][100], transpose[100][100];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

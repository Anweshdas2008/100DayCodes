// Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the order (n) of the square matrix: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    while (getchar() != '\n'); 

    int matrix[n][n];

    printf("Enter %d elements row by row:\n", n * n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Error: Failed to read element at [%d][%d]. Check your input.\n", i, j);
                return 1;
            }
            
            if (i == j) {
                sum += matrix[i][j];
            }
        }
    }

    printf("Sum of main diagonal elements: %d\n", sum);

    return 0;
}



// Multiply two matrices.

#include <stdio.h>

int main(void) {
    int r1, c1, r2, c2;

    while (1) {
        printf("Enter rows and columns for the first matrix: ");
        if (scanf("%d %d", &r1, &c1) != 2) {
            printf("Invalid input. Please enter integers.\n");
            return 1;
        }

        printf("Enter rows and columns for the second matrix: ");
        if (scanf("%d %d", &r2, &c2) != 2) {
            printf("Invalid input. Please enter integers.\n");
            return 1;
        }

        if (c1 == r2) {
            break; 
        }

        printf("\nError! Column of first matrix (%d) must equal row of second matrix (%d).\n", c1, r2);
        printf("Please re-enter valid dimensions.\n\n");
    }

    int first[r1][c1];
    int second[r2][c2];
    int result[r1][c2];

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    printf("\nEnter elements of matrix 1:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &first[i][j]);
        }
    }

    printf("\nEnter elements of matrix 2:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("Enter element b[%d][%d]: ", i, j);
            scanf("%d", &second[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    printf("\nResultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}

// Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int matrix[50][50]; 
    int n, i, j;
    int isDistinct = 1;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    while (getchar() != '\n'); 

    printf("\nEnter the elements row by row:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf(" %d", &matrix[i][j]); 
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0; 
                break;
            }
        }
        if (!isDistinct) {
            break;
        }
    }

    if (isDistinct) {
        printf("\nResult: All elements on the main diagonal are distinct.\n");
    } else {
        printf("\nResult: The elements on the main diagonal are NOT distinct.\n");
    }

    return 0;
}

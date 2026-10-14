// Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
    int size, i;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nThe elements in the array are: ");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

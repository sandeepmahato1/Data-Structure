#include <stdio.h>

#define SIZE 10 // Maximum size of the matrix

int main() {
    int matrix[SIZE][SIZE];
    int i, j, n, sum = 0;
    
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("\n %d", &matrix[i][j]);
        }
    }
    
    printf("The matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf(" %d \t", matrix[i][j]);
        }
        printf("\n");
    }
    
    // Compute the sum of diagonal elements
    for (i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    
    printf("Sum of diagonal elements: %d\n", sum);
    
    return 0;
}

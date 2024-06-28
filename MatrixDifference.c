#include <stdio.h>

/*
 * Description: This program reads two matrices A and B, both of dimensions n x m,
 *              and computes their difference (C = A - B). 
 */

int main() {
    int n, m;

    // Reading the dimensions of the matrices
    printf("Enter the number of rows and columns (n m): ");
    scanf("%d %d", &n, &m);

    int a[n][m], b[n][m], c[n][m];
    int i, j;

    // Reading matrix A
    printf("Enter elements of matrix A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Reading matrix B
    printf("Enter elements of matrix B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Printing matrix A
    printf("\nMatrix A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    // Printing matrix B
    printf("\nMatrix B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    // Calculating the difference (C = A - B)
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    // Printing the difference matrix C
    printf("\nDifference of matrix A and B (C = A - B):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

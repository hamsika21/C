#include <stdio.h>

/*
 * Description: This program performs various matrix operations on two input matrices A and B.
 *              It calculates and prints the following:
 *              - The difference of A and B
 *              - The sum of A and B
 *              - The transpose of the sum matrix
 *              - The product of A and B (considered as square matrices for simplicity)
 */

int main() {
    int n, m;

    // Reading the dimensions of the matrices
    scanf("%d %d", &n, &m);

    int i, j, k, a[n][m], b[n][m], c[n][m], d[n][m], e[n][m], f[n][m], sum;

    // Reading matrix A
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Reading matrix B
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Printing matrix A
    printf("A =\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d   ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Printing matrix B
    printf("B =\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d   ", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Calculating and printing the difference of matrices A and B
    printf("Difference =\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            c[i][j] = a[i][j] - b[i][j];
            printf("%d   ", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Calculating and printing the sum of matrices A and B
    printf("Sum =\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            d[i][j] = a[i][j] + b[i][j];
            printf("%d   ", d[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Calculating and printing the transpose of the sum matrix
    printf("Transpose of Sum =\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            e[i][j] = d[j][i];
            printf("%d   ", e[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Calculating and printing the product of matrices A and B
    printf("Product of Matrices =\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            sum = 0;
            for (k = 0; k < m; k++) {
                sum += a[i][k] * b[k][j];
            }
            f[i][j] = sum;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d\t", f[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}

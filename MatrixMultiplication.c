#include <stdio.h>

/*
 * Description: This program performs matrix multiplication on two input matrices A and B.
 */

int main() {
    int n, m, t;

    // Reading the dimensions of the matrices
    scanf("%d %d %d", &n, &m, &t);

    int i, j, k, a[n][m], b[m][t], c[n][t];

    // Initializing matrix C to zero
    for (i = 0; i < n; i++) {
        for (j = 0; j < t; j++) {
            c[i][j] = 0;
        }
    }

    // Reading matrix A
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Reading matrix B
    for (i = 0; i < m; i++) {
        for (j = 0; j < t; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Performing matrix multiplication and storing the result in matrix C
    for (i = 0; i < n; i++) {
        for (j = 0; j < t; j++) {
            for (k = 0; k < m; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Printing matrix B
    printf("\nMatrix B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < t; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // Printing matrix A
    printf("\nMatrix A:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Printing matrix C (result of A * B)
    printf("\nMatrix C (Result of A * B):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < t; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

/*
 * Description: This program prints Pascal's Triangle up to a specified number of rows.
 */

int main() {
    int n, c, i, j, k;
    printf("Input number of rows: ");
    scanf("%d", &n);

    // Loop through each row
    for (i = 0; i < n; i++) {
        // Print leading spaces
        for (j = 1; j <= n - i; j++) {
            printf("  ");
        }

        c = 1; // Reset c for each row

        // Loop through elements in the row
        for (k = 0; k <= i; k++) {
            // Calculate the binomial coefficient
            if (k == 0 || i == 0) {
                c = 1;
            } else {
                c = c * (i - k + 1) / k;
            }
            // Print the coefficient
            printf("%4d", c);
        }

        // Newline after each row
        printf("\n");
    }

    return 0;
}

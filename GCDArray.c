#include <stdio.h>

/*
 * Description: This program calculates the GCD (Greatest Common Divisor) of a series of numbers entered by the user.
 */

// Function to compute the GCD of two numbers
int gcd(int a, int b) {
    int r;
    r = a % b;
    if (r == 0)
        return b;
    else
        return gcd(b, r);
}

int main() {
    int a, b, n, i;
    
    // Read the number of elements in the series
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read the first number
    printf("Enter number 1: ");
    scanf("%d", &a);

    // Iterate through the rest of the numbers
    for (i = 1; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &b);
        a = gcd(a, b);  // Update `a` to the GCD of `a` and `b`
    }

    // Print the result
    printf("GCD = %d\n", a);

    return 0;
}

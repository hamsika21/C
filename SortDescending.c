#include <stdio.h>

/* 
   Description: This program reads an array of integers from the user, sorts it in descending order using bubble sort, and then prints the sorted array.
*/

int main() {
    int n;

    // Read the number of elements in the array
    scanf("%d", &n);

    int i, j, a[n], x;

    // Read the elements of the array
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Sort the array in descending order using bubble sort
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                // Swap a[i] and a[j]
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }

    // Print the sorted array
    for (i = 0; i < n; i++) {
        printf("\n%d", a[i]);
    }

    return 0;
}

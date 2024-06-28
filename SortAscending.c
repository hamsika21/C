#include <stdio.h>

int main() {
    int n, i, j, temp;
    
    // Read the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int a[n];
    
    // Read the elements of the array
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Sort the array in ascending order using bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Swap a[j] and a[j + 1]
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    // Print the sorted array
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

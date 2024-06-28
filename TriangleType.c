#include <stdio.h>

/*
 * Description: This program reads three float values representing the sides of a triangle
 *              and determines whether the triangle is equilateral, isosceles, scalene,
 *              right-angled, acute-angled, or obtuse-angled.
 */

int main() {
    float a, b, c;

    // Reading the sides of the triangle
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Checking for equilateral triangle
    if (a == b && b == c) {
        printf("\n\nForm sides of an equilateral triangle");
    } else {
        printf("\n\nDoes not form sides of an equilateral triangle");
    }

    // Checking for isosceles triangle
    if (a == b || b == c || c == a) {
        printf("\n\nForm sides of an isosceles triangle");
    } else {
        printf("\n\nDoes not form sides of an isosceles triangle");
    }

    // Checking for scalene triangle
    if (a != b && b != c && c != a) {
        printf("\n\nForm sides of a scalene triangle");
    } else {
        printf("\n\nDoes not form sides of a scalene triangle");
    }

    // Checking for right-angled triangle
    if (((a * a) + (b * b) == (c * c)) || ((a * a) + (c * c) == (b * b)) || ((b * b) + (c * c) == (a * a))) {
        printf("\n\nForm sides of a right-angled triangle");
    } else {
        printf("\n\nDoes not form sides of a right-angled triangle");
    }

    // Checking for acute-angled triangle
    if (((a * a) + (b * b) > (c * c)) && ((a * a) + (c * c) > (b * b)) && ((b * b) + (c * c) > (a * a))) {
        printf("\n\nForm sides of an acute-angled triangle");
    } else {
        printf("\n\nDoes not form sides of an acute-angled triangle");
    }

    // Checking for obtuse-angled triangle
    if (((a * a) + (b * b) < (c * c)) || ((a * a) + (c * c) < (b * b)) || ((b * b) + (c * c) < (a * a))) {
        printf("\n\nForm sides of an obtuse-angled triangle");
    } else {
        printf("\n\nDoes not form sides of an obtuse-angled triangle");
    }

    return 0;
}

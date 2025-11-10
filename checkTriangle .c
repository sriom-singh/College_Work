#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check validity using triangle inequality theorem
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The given sides form a valid triangle.\n");

        if (a == b && b == c) {
            printf("It is an Equilateral triangle.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("It is an Isosceles triangle.\n");
        }
        else {
            printf("It is a Scalene triangle.\n");
        }
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}

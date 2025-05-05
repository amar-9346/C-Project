#include <stdio.h>
void biggest3()
{

    int a, b, c;

    // Input three numbers
    printf("\n\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find the largest
    if (a >= b && a >= c) {
        printf("\nThe largest number is: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("\nThe largest number is: %d\n", b);
    } else {
        printf("\nThe largest number is: %d\n", c);
    }

   // return 0;
}

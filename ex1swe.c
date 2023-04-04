#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, m, sum;
    double c;
    // 1st operation
    printf("\nSum operation, Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    sum = a+b;
    printf("Sum of 2 numbers is: %d", sum);

    // 2nd operation
    printf("\nSubtraction operation, Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    sum = a-b;
    printf("Subtraction of 2 numbers is: %d", sum);

    // 3th operation
    printf("\nMultiplication operation, Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    sum = a*b;
    printf("Multiplication of 2 numbers is: %d", sum);

    // 4th operation
    printf("\nDivision operation, Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    sum = a/b;
    printf("Division of 2 numbers is: %d", sum);

    // 5th operation
    printf("\nSquare root operation, Enter 1 numbers: ");
    scanf("%lf", &c);
    c = sqrt(c);
    printf("Square root of number is: %.2lf", c);

    // 6th operation
    printf("\nPower operation, Enter powe and number: ");
    scanf("%d %lf", &m, &c);
    c = pow(c, m);
    printf("Number with %d power is: %.2lf", m, c);

    return 0;
}
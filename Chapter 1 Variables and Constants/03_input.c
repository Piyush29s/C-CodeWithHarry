#include <stdio.h>
int main()
{
    int a, b, sum;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    // %d, %f, %c are format specifier
    // and &(ampersand) is adress of a
    printf("\nEnter the value of b: ");
    scanf("%d", &b);
    sum = a + b;
    printf("Sum is %d", sum);
    return 0;
}
#include <stdio.h>

int factorial(int x);
int main()
{
    int a, fact;
    printf("Enter the value of number: \n");
    scanf("%d", &a);

    fact = factorial(a);
    printf("\nThe value of Factorial of %d is %d", a, fact);

    return 0;
}

int factorial(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}
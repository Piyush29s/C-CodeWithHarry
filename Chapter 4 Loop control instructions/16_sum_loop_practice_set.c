//Write a program to sum first ten natural numbers using loop

#include <stdio.h>

int main()
{
    int i, sum, n = 10;

    for (i = 0; i <= n; i++)
    {
        sum += i;
    }

    printf("The value of sum(1 to 10) is %d", sum);

    return 0;
}
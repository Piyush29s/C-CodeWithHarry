// Write a recursive function to calculate sum of first n natural number

#include <stdio.h>

int sum(int n);

int main()
{
    int m;
    printf("Enter the number of natural numbers: ");
    scanf("%d", &m);

    int naturalSum = sum(m);

    printf("\nThe sum of N natural numbers is %d", naturalSum);
    return 0;
}

int sum(int n)
{

    if (n == 0)
    {
        return;
    }
    else
    {
        return n + sum(n - 1);
    }
}
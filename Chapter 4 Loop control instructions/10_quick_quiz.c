// Write a program to print n natural numbers in reverse order

#include<stdio.h>

int main()
{
    int k;
    int i;
    printf("Enter the value of k: ");
    scanf("%d", &k);

    for (i=k; i; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}
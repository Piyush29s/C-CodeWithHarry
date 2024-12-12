// Write a program to print multiplication table of a given number n

#include<stdio.h>

int main()
{
    int n;
    int i, k;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i=1; i<=10; i++)
    {
        k=i*n;
        printf("%d*%d=%d\n", n,i,k);
    }
    return 0;
}
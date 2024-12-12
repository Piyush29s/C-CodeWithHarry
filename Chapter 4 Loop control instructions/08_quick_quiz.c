// Wruite a program to print first n natural numbers using for loop

#include <stdio.h>

int main()
{
    int k;
    printf("Engter the value of k: ");
    scanf("%d", &k);
    for (int i = 0; i < k; i++)
    {
        printf("The natural number is %d\n", i + 1);
    }
    return 0;
}
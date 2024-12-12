// C program to checkn wether the number is even or odd
#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);

    //If condition given in if statement is true then it will execute otherwise else condition will reflect if else is present
    if (a %2==0)
    {
        printf("%d is an even number\n", a);
    }

    // else block is an optional block
    else
    {
        printf("%d is an odd number", a);
    }
    return 0;
}
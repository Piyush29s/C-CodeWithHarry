#include<stdio.h>

int main()
{
    printf("****Multiplication Table of 10 in Reverse order****\n\n");

    for(int i=10; i; i--)
    {
        printf("10 X %d = %d\n", i, 10*i);
    }
    return 0;
}
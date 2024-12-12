// Write a program to find the greatest of four numbers entered by the users

#include <stdio.h>

int main()
{
    int num[3], i, max;

    printf("Enter the four number: ");

    for (i = 0; i <= 3; i++)
    {
        scanf("%d", &num[i]);
    }

    num[0] = max;

    for (i = 1; i < 4; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }

    printf("Maximum of the four number is %d", max);

    return 0;
}
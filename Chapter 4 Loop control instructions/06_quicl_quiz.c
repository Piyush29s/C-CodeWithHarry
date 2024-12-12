// Write a program to print first n natural numbers using do-while loop

#include <stdio.h>

int main()
{
    int i, k = 1;
    printf("Enter the number of natural numbers you want: ");
    scanf("%d", &i);

    do
    {
        printf("%d\n", k);
        k++;
    } while (k <= i);

    return 0;
}

// OR WE CAN DO LIKE THIS

// #include<stdio.h>

// int main()
// {
//     int i;
//     int k=0;

//     printf("Give th evalue of i: ");
//     scanf("%d", &i);

//     do
//     {
//         printf("The number is %d\n", k+1);
//         k++;
//     } while (k<i);
    
//     return 0;
// }
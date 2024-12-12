// Write a program using functions to find average of three numbers

#include <stdio.h>

float avg(int a);

int main()
{
    int b, c, d, sum;

    printf("\nEnter the value of first number: ");
    scanf("%d", &b);

    printf("\nEnter the value of second number: ");
    scanf("%d", &c);

    printf("\nEnter the value of third number: ");
    scanf("%d", &d);

    sum = b + c + d;

    float average = avg(sum);

    printf("The Average of three numbers is %.2f", average);

    return 0;
}

float avg(int a)
{

    int avg;
    avg = a / 3;

    return avg;
}
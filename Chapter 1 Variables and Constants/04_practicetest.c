#include<stdio.h>

int main()
{
    float principal, rate, interest, time;

    printf("Enter the value of Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter the value of Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter the value of Period of Time: ");
    scanf("%f", &time);

    interest=(principal*time*rate)/100;

    printf("The value of Simple Interest is %f", interest);

    return 0;
}
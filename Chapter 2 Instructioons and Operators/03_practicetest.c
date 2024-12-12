#include <stdio.h>

//Checking divisibility of a nunber by 97

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num % 97 == 0)
    {
        printf("\nThe number is divisible by 97");
    }
    else
    {
        printf("The number is not divisible by 97");
    }

    return 0;
}
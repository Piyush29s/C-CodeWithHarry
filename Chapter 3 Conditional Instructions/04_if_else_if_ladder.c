#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    // Only one will execute from the rest given below
    // If somone gets execute then control will directly jump to the line after else statement
    // Last else is executed only if all conditions fail.

    if (num == 1)
    {
        printf("Your number is 1\n");
    }

    else if (num == 2)
    {
        printf("Your number is 2\n");
    }

    else if (num == 3)
    {
        printf("Your number is 3\n");
    }

    else
    {
        printf("It is not 1, 2 or 3");
    }
    return 0;
}
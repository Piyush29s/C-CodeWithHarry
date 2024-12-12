#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age>=90 || age<18)
    {
        printf("You cannot drive");
    }

    else 
    {
        printf("You can drive\n");
    }

    // '=' sign assign the value of the data type whereas '==' sign is used for equality check
    if (age==50)
    {
        printf("Half Century\n");
    }
    return 0;
}
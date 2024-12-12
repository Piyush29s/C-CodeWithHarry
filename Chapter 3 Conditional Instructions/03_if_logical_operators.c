#include<stdio.h>

    // && is for AND --> it is true when both condition are true
    // || is for OR --> it is true when atleast one condition is true
    // ! is for NOT --> returns true if given false and false if given true

int main()
{
    int age;
    int vipPass=0;
    vipPass=1;
    printf("Enter your age: ");
    scanf("%d", &age);

    if ((age<=70 && age>=18) || (vipPass==1))
    {
        printf("You are above 18 and below 70, you can drive\n");
    }

    else 
    {
        printf("You cannot drive\n");
    }
    return 0;
}
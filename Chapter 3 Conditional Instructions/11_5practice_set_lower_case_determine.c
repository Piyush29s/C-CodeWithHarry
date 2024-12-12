// Write a program to determine whether a character entered by the user is lowercase or not

// We are doing it by using ASCII code

#include<stdio.h>

int main()
{
    // 97-122 = a-z ASCII Value
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    if (ch<=122 && ch>=97)
    {
        printf("It is a lower case character");
    }

    else 
    {
        printf("It is not a lower case character");
    }
    

    return 0;
}
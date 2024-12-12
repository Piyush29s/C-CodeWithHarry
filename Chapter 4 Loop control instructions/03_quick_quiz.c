// Write a program to print natural numbers from 10 to 20 when initial loop counter is initialized to zero

#include <stdio.h>

int main()
{
    int i = 0;

    while (i <= 20)
    {
        if (i >= 10)
        {
            printf("The value of i is %d\n", i);
        }
        i++; //This should be outside of 'if' and it is inside 'while' bracket
    }

    return 0;
}

// i++ --> i is increased by 1
// i-- --> i is decreased by 1

// The break sstatement is used to exit the loop irrespective whether the condition is true of false 4

#include <stdio.h>

int main()
{
    int i = 0;
    do
    {
        printf("The value of i is %d\n", i);

        if (i == 4)
        {
            break;
        }

        i++;
    } while (i < 10);

    return 0;
}
// Continue statement is used immediately move to the next iteration of the loop

#include <stdio.h>

int main()
{
    int skip = 5;
    int i = 0;

    while (i < 10)
    {
        i++;
        if (i != skip)
        {
            continue;
        }
        else
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
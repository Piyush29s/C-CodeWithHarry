#include <stdio.h>

int sum(int, int);

int main()
{
    int x = 3, y = 9;

    printf("The sum of x and y is %d\n", sum(x, y));
    printf("The value of x is %d\n", x);
    return 0;
}

// Sum function m x and y ki copy jaa rhi hai naa ki x and y khud to sum function pr koi adhikaar nhi hai ki vo x ki value badalde

int sum(int a, int b)
{
    a = 6; // Sum function cannot change x using a because copy of x is provided to sum in a
    return a + b;
}
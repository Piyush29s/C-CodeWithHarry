#include<stdio.h>

int main()
{
    int x=4;
    int y=9;
    
    // In C language simple mathematical rules like BODMAS, no longer applies
    // There is a set priority in C for the operators for thatv look in notes

    printf("The value of 3x-8y is %d\n ", 3*x - 8*y);
    printf("The value of 8*y / 3*x is %d\n ", 8*y / 3*x);
    // 8*3 / 3*x = 24/6 will give a wrong answer
    return 0;
}
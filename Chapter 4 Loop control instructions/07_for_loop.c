/*
    The syntax of for loop looks like this

for(initialize; test; increment or decrement)
{
    ---code---
    ---code---
}

intialize --> Setting the loop counter to an initial value
Test --> Checking the coondition
Increment --> Updating the loop counter 
*/

#include<stdio.h>

int main()
{
    for (int a=0; a<10; a++)
    {
        printf("The value of a is %d\n", a+1);
    }
    return 0;
}
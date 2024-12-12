#include<stdio.h>

void display(); // --> Fucntion Prototype

int main()
{
    int a;

    display(); // --> Fucntion call

    return 0;
}

void display() // --> Function Definition
{
    printf("Hi I am display");
}
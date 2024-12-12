// Use the library function to calculate the area of a sqaure

#include <stdio.h>
#include <math.h>

float area(int a);

int main()
{
    double c;
    int s;
    printf("Enter the value of side: ");
    scanf("%d", &s);

    c = area(s);

    printf("The area of square is %.1lf", c);
    return 0;
}

float area(int a)
{
    float squareArea;
    squareArea = pow(a, 2);
    return squareArea;
}

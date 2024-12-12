#include <stdio.h>

int main()
{
    int length, breadth, area;
    printf("What is the length of rectangle: ");
    scanf("%d", &length);

    
    printf("What is the breadth of rectangle: ");
    scanf("%d", &breadth);

    area = length * breadth;
    printf("The area is %d", area);

    return 0;
}
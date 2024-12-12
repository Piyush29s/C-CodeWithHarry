#include<stdio.h>

// Condition ? expression-if-true : expression-if-false

int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d", &a);

    // One liner if statement 
    // it is advisable to use when code is small because of its readability 
    (a<5)? printf("A is less than 5") : printf("A is not less than 5");
    return 0;
}
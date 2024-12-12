#include <stdio.h>

/* Loops are used to repeat similar part of a code snippet effeciently

 while (if condition is true it will execute)
 {
     code 
 }

 The block keeps executing as long as condition is true

 Note: If the condition never gets false, the while loop keeps getting executed such a loop is known as an infinite loop
*/


int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    while (a <= 10)
    {
        printf("%d\t", a);
        a++;
    }

    return 0;
}
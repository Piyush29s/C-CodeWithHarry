#include <stdio.h>

int main()
{
    int i = 9;
    int *j = &i;  // This pointer will store adress of i
    int **k = &j; // This pointer will store adress of j

    // "* se & kat ta hai" --> Shown below
    

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", *(&i));
    printf("The value of i is %d\n", **(&j));
    printf("The value of i is %d\n", **k);

    return 0;
}
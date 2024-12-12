#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value alter i++ is %d\n", i++); // If i write i++ in this line the value which will be printed is 5 but if I use ++i then only 6 will print

    printf("The value ater i is %d\n", i);

    i++; // --> Pehle print kare fir increment kare
    ++i; // --> Pehle increment kare fir print kare

    i+=10; // --> Increments i by 10

    printf("The value ater i is %d\n", i);
    return 0;
}
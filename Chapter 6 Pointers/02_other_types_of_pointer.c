#include <stdio.h>

int main()
{
    char i = 'A';
    char *j = &i; // j is a pointer pointing to i (j is a charachter pointer)
    // Jis data type ka adress store krna hai usi data type ka pointer hoga like here

    float k = 5.326;
    // Jo pointer declare krna hai vo usi data type ka rkhna hai jis data type ka variable hai
    float *m = &k; // j is a pointer pointing to k (j is a float pointer)

    printf("The adress of i is %p\n", &i);
    printf("The adress of i is %p\n", j);

    printf("The adress of k is %p\n", &k);
    printf("The adress of k is %p\n", m);

    printf("The value at j is %c\n", *j);
    printf("The value at m is %f\n", *m);

    return 0;
}
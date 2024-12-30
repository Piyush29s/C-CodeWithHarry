#include <stdio.h>

int main()
{
    int i = 72;
    int *j = &i; // j is a pointer pointing to i
    printf("The adress of i is %p\n", &i);
    printf("The adress of i is %p\n", j);

    // j jo jai vo adress store kr rha hai i ka which is &i yaa j 
    // j jo jai vo adress store kr rha hai us adress pr jo value hai vo which is i yaa *j 
    // Kisi adress pr aap * operator lagate ho to us adress ki value aajati hai
    // Or agar kisi integer pr * operator lagaya to uska adress aajata hai 

    printf("The value at j is %d", *j);
    return 0;
}
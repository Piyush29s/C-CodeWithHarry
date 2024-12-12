#include<stdio.h>
#include<math.h>

int main()
{
    int a = 4;
    int b = 8;
    int z;
    
    // Operands can be int/float etc
    // + - * / are arithmetic operators
    printf("The value a+b is: %d\n", a+b);
    printf("The value a-b is: %d\n", a-b);
    printf("The value a*b is: %d\n", a*b);
    printf("The value a/b is: %d\n", a%b);

    z = b*a; //We can write this this is legal
   // b*a = z; //We cannot write this because '=' is an assign operator i.e we have declared that b*a is = z but it is not true b*a is 32 

    printf("The value of z is: %d\n", z);


    // % --> Modular Division Operator
    // It returns the remainder
    // It cannot be applied on float

    printf("5 when divided by 2 leaves a remainder of %d\n", 5%2); 
    printf("-5 when divided by 2 leaves a remainder of %d\n", -5%2); // Sign is same as of numerator (-5%2 = -1)
    printf("5 when divided by -2 leaves a remainder of %d\n", 5%-2);

    //No operator is assumed to be present means operators are predefined for example 
    // printf("The valur of 4*5 is %d\n", (4)(5)); --> Will not return 20/ Wrong !!
    

    // There is no operator to perform exponentiation in C
    //printf("The value of 4^5 is %d\n", 4^5); --> Will not produce 4 to the power 5
    //For having power
    printf("The value of 2 to the power 5 is %.0 f\n", pow(2,5));



    return 0;
}
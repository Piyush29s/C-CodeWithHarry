#include <stdio.h>

// Sum is a function which takes a and b as input and returns an integer as an output
int sum(int a, int b); // Function prototype declaration
// a and b are parameters and int is the datatype which will be returned by sum function.
int main()
{
    int c;

    // Sum ab void nhi hai vo int value return kr rha hai and vo value hum integr c ko de rhe hai
    c = sum(2, 5); // Function Call
    // Here 2 and 5 are arguments

    printf("The value of Sum is %d\n", c);

    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result; // a and b ko jod kr return krdo
}

// a and b are parameters and 2 and 5 aere argument.(Arguments are actual values)
// A function can only return one value
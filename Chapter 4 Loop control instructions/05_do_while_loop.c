#include<stdio.h>

/*The syntax of do-while loop looks like this
do
{
     code 
} while ( condition );
*/


int main()
{
    int i=0;
    do
    {
        printf("The value of i is %d\n", i);
        i++;
    }while(i<10);
    
    return 0;
}

// while --> Checks the conditio then executes the code
// do-while --> Executes the code and then checks the condition
// do-while loops ek aisa while loop hai jo ek naa ek baar jrur chalega(atleast once)
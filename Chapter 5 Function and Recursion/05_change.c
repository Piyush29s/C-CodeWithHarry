#include<stdio.h>

void change(int a);
int main()
{
    int b = 244;
    printf("The value of b before change is %d\n", b);
    change(b);
    printf("The value of b before change is %d\n", b);

    
    return 0;
}

void change(int a)
{
    a = 77; 
}

// This is a misnomer iska vo kaam nhi hai bus naam hai varna dono function ke integer are independent.
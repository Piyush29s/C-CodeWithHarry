// Write a program to find out whether a student is pass or fail; if it requires total of 40% and atleast 33% in each subject to pass. Assume 3 subjects and take marks as input from the users


#include <stdio.h>

int main()
{
    int maths, physics, chemistry;
    float total;

    printf("Enter Physics Marks\n");
    scanf("%d", &physics);

    printf("Enter Maths Marks\n");
    scanf("%d", &maths);

    printf("Enter Chemistry Marks\n");
    scanf("%d", &chemistry);

    total = (physics + maths + chemistry) / 3;

    if ((total < 40) || physics < 33 || maths < 33 || chemistry < 33)
    {
        printf("Your total percentage is %.2f and you are Fail", total);
    }

    else
    {
        printf("Your total percentage is %.2f and you are Passed", total);
    }

    return 0;
}
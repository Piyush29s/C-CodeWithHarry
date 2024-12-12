/* Calculate income tax paid by an employee to the government as per the slabs mentioned below:
    Income Slab         Tax
    2.5L-5.0L            5%
    5.0L-10.0L           20%
    Above 10.0L          30%

  No income tax to be paid for income below 2.5L 
  Take income amount as input from the user  
*/

#include <stdio.h>

int main()
{
    float income, tax;

    printf("Enter your Anual Income: ");
    scanf("%f", &income);

    if (income < 250000)
    {
        printf("No Income tax to be paid");
    }
    else if (income >= 250000 && income < 500000)
    {
        printf("Tax to be paid is 5 percent of your income\n");
        tax = (income) / 20;
        printf("Tax to be paid is %.2f", tax);
    }

    else if (income >= 500000 && income < 1000000)
    {
        printf("Tax to be paid is 20 percent of your income\n");
        tax = (income) / 5;
        printf("Tax to be paid is %.2f", tax);
    }

    else if (income >= 1000000)
    {
        printf("Tax to be paid is 30 percent of your income\n");
        tax = (income * 30) / 100;
        printf("Tax to be paid is %.2f", tax);
    }

    return 0;
}
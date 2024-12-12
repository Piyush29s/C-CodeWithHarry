#include <stdio.h>

// Switch-case is used when we have to make a choice between number of alternatives for a given variable
/*
 Switch (integer-expression)
 {
     case C1:
     code;

     case C2:
     code;

     Case C3:
     code;

 }
        here C1, C2, C3 --> Constants
        Code --> Any valid C code
 */

// The value of integer-expression is matched against C1, C2, C3.... It is matches any of these cases, that case along with all sbsequent "case" and "default" statements are executed

int main()
{
    int rating;
    printf("Enter your rating (1-5): ");
    scanf("%d", &rating);

    switch (rating)
    {
    case 1:
        printf("Your rating is 1\n");
        break;
    
    case 2:
        printf("Your rating is 2\n");
        break;
    
    case 3:
        printf("Your rating is 3\n");
        break;
    
    case 4:
        printf("Your rating is 4\n");
        break;
    
    case 5:
        printf("Your rating is 5\n");
        break;
    
    default:
        printf("Invalid rating!");
    }

    return 0;
}
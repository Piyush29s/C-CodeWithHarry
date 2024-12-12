#include <stdio.h>

void goodMorning();
void goodAfternooon();
void goodNight();

int main()
{
    goodMorning();

    return 0;
}

void goodMorning()
{
    printf("Good Morning Piyush\n");
    goodAfternoon();
}

void goodAfternoon()
{
    printf("Good Afternoon Piyush\n");
    goodNight();
}

void goodNight()
{
    printf("Good Night Piyush\n");
}

// Main function called goodMorning function directly and goodAfternoon and goodNight function indirectly
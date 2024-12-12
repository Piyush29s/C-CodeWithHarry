// Write a program printing goodmorning, good afternoon and good night using functions

#include<stdio.h>

void goodMorning();
void goodAfternooon();
void goodNight();

int main()
{
    goodMorning();
    goodAfternoon();
    goodNight();
    
    return 0;
}

void goodMorning(){
    printf("Good Morning Piyush\n");
}

void goodAfternoon(){
    printf("Good Afternoon Piyush\n");
}

void goodNight(){
    printf("Good Night Piyush\n");
}
// Write a function to calculate force of attraction on a body of mass m exerted by earth

#include <stdio.h>

float force(float m);

int main()
{
    float m;
    printf("Enter the mass of the body: ");
    scanf("%f", &m);

    float frc = force(m);

    printf("\n The Force of attraction is %.2f", frc);

    return 0;
}

float force(float m)
{
    float attraction;

    attraction = m * (9.8);
    return attraction;
}

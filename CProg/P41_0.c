// Program to Find the Gravitational Force Acting Between Two Objects
/*
f=(G*m1*m2)/(r*r)
*/

#include <stdio.h>
#include <math.h>
#define G 6.67 / 1e11

int main()
{
    float m1, m2, r;
    float f;
    m1 = 20000000;
    m2 = 4000000;
    r = 15;

    /*  printf("\nm1: ");
     scanf("%f", &m1);

     printf("\nm2: ");
     scanf("%f", &m2);
     printf("\nr: ");
     scanf("%f", &r); */

    f = (G * m1 * m2) / (r * r);
    float value = (int)(f * 100 + .5);
    value = (float)value / 100;

    printf("\n Gravitational Force is: %.2f N", value);
    return 0;
}
// Program to Take the Temperature in Celsius and Convert it to Fahrenheit

#include <stdio.h>
#include <conio.h>

int main()
{

    float c = 0, f;
    // clrscr();
    printf("celsius: %f", c);

    f = ((c * 9) / 5) + 32;
    printf("\nfahernhit: %f", f);
    return 0;
}
// Program to Read Height in Centimeters and then Convert the Height to Feet and Inches

#include <stdio.h>
int main()
{
    float centi;
    float feet, inches;

    printf("Enter the Centimeter :");
    scanf("%f", &centi);

    inches = centi / 2.5;
    printf("\nInch: %.2f", inches);

    feet = inches / 12;
    printf("\nfeet: %.2f", feet);
}
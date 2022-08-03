// Program to Find the Area of a Triangle Given All Three Sides

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, max;
    float s, area;

    printf("Enter the three side of the Triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    s = (float)(a + b + c) / 2;
    area = s * (s - (float)a) * (s - (float)b) * (s - (float)c);
    area = sqrt(area);
    printf("\n Area of Triangle of Three Side : %.2f", area);
    return 0;
}
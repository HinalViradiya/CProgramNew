// Program to Search the Number of Times a Particular Number Occurs in a List

#include <stdio.h>

int main()
{
    int no[50];

    printf("Enter 5 integers: \n");
    // taking input and storing it in an array

    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &no[i]);
    }

    printf("Displaying integers:\n ");
    // printing elements of an array

    for (int i = 0; i < 5; ++i)
    {
        printf("%d\n", no[i]);
    }

    return 0;
}
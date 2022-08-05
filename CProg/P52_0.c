// Program to Search the Number of Times a Particular Number Occurs in a List

#include <stdio.h>
int main()
{
    int no[50], t = 0, n = 10, counter = 0;

    printf("Enter 10 integers: \n");
    // taking input and storing it in an array

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &no[i]);
    }

    printf("Enter the no if you want search it :");
    scanf("%d", &t);

    printf("Displaying integers:\n ");
    // printing elements of an array

    for (int i = 0; i < n; ++i)
    {
        if (no[i] == t)
        {
            counter++;
        }
    }
    printf("No occure in %d times in the list ", counter);

    return 0;
}
// Program to Take in Two Strings and Display the Larger String without Using Built-in Functions

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100], len1, len2;
    int i, j;
    char chTemp;

    printf("\nEnter the 1st String :");
    gets(str1); // need only word

    printf("\nEnter the 2nd String :");
    gets(str2); // need only word

    for (int i = 0; str1[i] != '\0'; i++)
        len1++;
    for (int i = 0; str2[i] != '\0'; i++)
        len2++;

    // printf("The sorted string is : %s", str2);
    if (len1 > len2)
    {
        printf("\nLarge String is :%s", str1);
    }
    else
    {
        printf("\nLarge String is :%s", str2);
    }
    return 0;
}
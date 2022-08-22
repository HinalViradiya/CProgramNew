// /Program to Check if a String is a Palindrome or Not

#include <stdio.h>
#include <string.h>
int main()
{
    char name[100], revese[100];

    printf("\nEnter the String :");
    gets(name);

    int len = strlen(name);

    printf("\nNew Revese String is : %d ", len);
    int k = 0;

    for (int i = len - 1; i >= 0; i--)
    {
        revese[k] = name[i];
        k++;
    }
    revese[k] = '\0';

    if (strcmp(name, revese) == 0)
        printf("\nBoth strings are palindrom");
    else
        printf("\nBoth strings are not palindrom");

    return 0;
}
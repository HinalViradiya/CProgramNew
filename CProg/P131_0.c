// Program to Check Whether a String is a Palindrome or not Using Recursion
#include <stdio.h>
#include <string.h>

int checkPalindrom(char *s1, int f, int l)
{
    if (l == f)
        return 1;
    if (s1[f] != s1[l])
        return 0;
    if (f < l + 1)
        return checkPalindrom(s1, f + 1, l - 1);
    return 1;
}

int main()
{
    char name[100], revese[100];
    int flag = 0;
    printf("\nEnter the String :");
    gets(name);
    int len = strlen(name);
    if (len == 0)
        printf("String is Palindrom");
    else
        flag = checkPalindrom(name, 0, len - 1);

    if (flag == 0)
        printf("String is not Palindrom");
    else
        printf("String is Palindrom");
    return 0;
}
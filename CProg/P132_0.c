// Program to Reverse a String Using Recursion

#include <stdio.h>
#include <string.h>

void reverseStr(char *s1, int len, int i)
{

    if (len == i)
    {
        return;
    }
    char ch = s1[i];
    reverseStr(s1, len, i + 1);
    printf("%c", ch);
}

int main()
{
    char name[100];

    printf("\nEnter the String :");
    gets(name);

    int len = strlen(name);

    reverseStr(name, len, 0);
    return 0;
}
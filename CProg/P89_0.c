// Program to Remove the Characters of Odd Index Values in a String
#include <stdio.h>
int main()
{
    char name[100], str[100];
    int len = 0, k = 0;
    printf("\nEnter the String :");
    gets(name);
    // scanf("%[^\n]s",str);   Get String with space character

    for (int i = 0; name[i] != '\0'; i++)
    {
        len++;
        if (i % 2 != 0)
        {
            str[k] = name[i];
            k++;
        }
    }
    str[k] = '\0';

    printf("\nLength of the String is : %s", str);
    return 0;
}
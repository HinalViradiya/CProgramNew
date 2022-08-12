// Program to Calculate the Length of a String Without Using a Library Function
#include <stdio.h>
int main()
{
    char name[100];
    int len = 0;
    printf("\nEnter the String :");
    gets(name);
    // scanf("%[^\n]s",str);   Get String with space character

    for (int i = 0; name[i] != '\0'; i++)
    {
        len++;
    }

    printf("\nLength of the String is : %d", len);
    return 0;
}
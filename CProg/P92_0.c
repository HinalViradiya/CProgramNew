// Program to Count Number of Lowercase Characters in a String

#include <stdio.h>
#include <string.h>
int main()
{
    char name[100], smallLetter = 0;

    printf("\nEnter the String :");
    gets(name);
    // scanf("%[^\n]s",str);   Get String with space character

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 97 && name[i] <= 122)
        {
            smallLetter++;
        }
    }

    printf("\nSmall Letter in String are : %d ", smallLetter);
    return 0;
}
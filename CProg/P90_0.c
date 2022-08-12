// Program to Calculate the Number of Words and the Number of Characters Present in a String

#include <stdio.h>
#include <string.h>
int main()
{
    char name[100], words = 0, chacter = 0;
    int len = 0;
    printf("\nEnter the String :");
    gets(name);
    // scanf("%[^\n]s",str);   Get String with space character
    if (strlen(name) != 0)
    {
        words++;
    }
    for (int i = 0; name[i] != '\0'; i++)
    {

        if (name[i] == ' ')
        {
            words++;
        }
        else
        {
            chacter++;
        }
    }

    printf("\nWords: %d  | Character : %d", words, chacter);
    return 0;
}
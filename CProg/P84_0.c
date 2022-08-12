// Program to Detect if Two Strings are Anagrams

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100], len1, len2;
    int i, j;
    char chTemp;
    printf("\nEnter the 1st String :");
    scanf("%s", str1); // need only word

    printf("\nEnter the 2nd String :");
    scanf("%s", str2); // need only word

    len1 = strlen(str1);
    len2 = strlen(str2);
    // str1
    for (i = 0; i < len1 - 1; i++)
    {
        for (j = i + 1; j < len1 - 1; j++)
        {
            if (str1[i] >= str1[j])
            {
                chTemp = str1[i];
                str1[i] = str1[j];
                str1[j] = chTemp;
            }
        }
    }
    // str2
    for (i = 0; i < len2 - 1; i++)
    {
        for (j = i + 1; j < len2 - 1; j++)
        {
            if (str2[i] >= str2[j])
            {
                chTemp = str2[i];
                str2[i] = str2[j];
                str2[j] = chTemp;
            }
        }
    }

    // printf("The sorted string is : %s", str2);
    if (strcmp(str1, str2))
    {
        printf("\nStrings are anagram of each other");
    }
    else
    {
        printf("\nStrings are not anagram of each other");
    }
    return 0;
}
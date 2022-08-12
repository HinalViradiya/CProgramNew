// Program to Calculate the Number of Upper Case Letters and Lower Case Letters in a String

#include <stdio.h>
#include <string.h>
int main()
{
    char name[100], smallLetter = 0, capiLetter = 0;

    printf("\nEnter the String :");
    gets(name);
    // scanf("%[^\n]s",str);   Get String with space character

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 97 && name[i] <= 122)
        {
            smallLetter++;
        }
        else if (name[i] >= 65 && name[i] <= 90)
        {
            capiLetter++;
        }
    }

    printf("\nSmall Letter  : %d \nCapital Letter  : %d ", smallLetter, capiLetter);
    return 0;
}

/*
Enter the String :hiN@aL Vi#RaDIYa

Small Letter  : 6
Capital Letter  : 7*/
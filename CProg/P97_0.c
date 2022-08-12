// Program to Calculate the Number of Digits and Letters in a String

#include <stdio.h>
#include <string.h>
int main()
{
    char name[100], letter = 0, digit = 0;

    printf("\nEnter the String :");
    gets(name);
    // scanf("%[^\n]s",str);   Get String with space character

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 97 && name[i] <= 122 || name[i] >= 65 && name[i] <= 90)
        {
            letter++;
        }
        else if (name[i] >= 48 && name[i] <= 57)
        {
            digit++;
        }
    }

    printf("\nLetters  : %d \nDigits  : %d ", letter, digit);
    return 0;
}

/*
Enter the String :AshjDF5Sghs6H7gs

Letters  : 13
Digits  : 3*/

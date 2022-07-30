// Write a program to compair two string using Operator overloading
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;
class compaireString
{
    char str[20];

public:
    void getData()
    {
        gets(str);
    }

    int operator==(compaireString s)
    {
        if (!strcmp(str, s.str))
            return 1;
        else
            return 0;
    }
};
int main()
{
    compaireString s1, s2;

    cout << "Enter the String 1 ::";
    s1.getData();

    cout << "Enter the String 2 ::";
    s2.getData();

    if (s1 == s2)
    {
        cout << "\nStrigs are Equal\n";
    }
    else
    {
        cout << "\nStrings are Not Equal\n";
    }
    return 0;
}
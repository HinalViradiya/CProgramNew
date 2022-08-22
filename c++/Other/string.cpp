#include <iostream>
#include <string.h> // for string class
using namespace std;

/* int main()
{
    string name = "Hello";
    char ch[] = {'c', 'p', 'p', '\0'};
    string s1 = string(ch);
    cout << "Name : " << name << endl;
    cout << "S1 : " << s1;
    return 0;
} */

int main()
{
    // char s1[100];
    char s1[80], s2[80], s3[100];
    char result[100];
    string aStr;
    char ch[] = {'C', '+', '+', '\0'};
    // string s2 = string(ch);
    cout << "\nEnter the 1st String : ";
    gets(s1);

    cout << "\nEnter the 2nd String : ";
    gets(s2);

    cout << "\nLength : " << strlen(s1);
    cout << "\nStr copy: " << strcpy(result, s1);

    aStr.append(s1);
    cout << "\n Append Str : " << aStr;

    cout << "\nStr concatenate: " << strcat(s1, s2);

    cout << "\nStr Compaire: " << strcmp(s3, result);

    if (strchr(s1, 'a'))
    {
        cout << "\n String in find Character : " << strchr(s1, 'a');
    }

    if (strstr(s2, "qode"))
    {
        cout << "\nString in find Sub String : " << strstr(s2, "qode") << endl;
    }

    // getline(cin, s1); // Get word from
    // cin.get(s1, 100);  // Get

    gets(s1);
    cout << s1 << endl;
    // cout << s2 << endl;
}
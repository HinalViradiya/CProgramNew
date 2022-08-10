// Static variable

#include <iostream>
#include <string>
using namespace std;
const float PI = 3.14;
enum week
{
    Sun,
    mon,
    tue,
    wed,
    thus,
    fri,
    sat
};
void demo()
{
    // static variable
    static int count = 0;
    cout << "\n " << count << " ";
    count++;
}

int main()
{
    week day;
    day = mon;
    cout << "\nDay ::" << day;
    cout << "\nDay 2 ::" << day + 2;

    cout << "\n " << PI << " ";
    for (int i = 0; i < 5; i++)
        demo();

    int f = 10;
    int &aliasF = f;

    cout << "\n F: " << f;
    cout << "\n alias : " << aliasF;

    aliasF += 10;

    cout << "\n F: " << f;
    cout << "\n Alias :" << aliasF;
    return 0;
}
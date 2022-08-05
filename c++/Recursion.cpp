// Recursion function
#include <iostream>
#include <string>
using namespace std;

int reCursion(int n)
{
    if (n < 0)
    {
        return -1;
    }
    if (n == 0)
        return 1;
    else
    {
        return n * (reCursion(n - 1));
    }
}
int main()
{
    int a = 5, ans;
    ans = reCursion(a);
    string result = (ans >= 1) ? "Factorial " : "Number is 0 or less than 0";
    cout << result;
}
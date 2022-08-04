#include <iostream>
using namespace std;
class XYZ;
class ABC
{
    int no;

public:
    void getData(int n)
    {
        no = n;
    }
    friend int min(ABC, XYZ);
};
class XYZ
{
    int no1;

public:
    void getData(int n1)
    {
        no1 = n1;
    }
    friend int min(ABC, XYZ);
};

int min(ABC a, XYZ x)
{
    if (a.no > x.no1)
    {
        cout << x.no1 << " is Minimum";
    }
    else
    {
        cout << a.no << " is Minimum";
    }
}

int main()
{
    ABC a1;
    a1.getData(10);
    XYZ x1;
    x1.getData(24);
    min(a1, x1);
    return 0;
}
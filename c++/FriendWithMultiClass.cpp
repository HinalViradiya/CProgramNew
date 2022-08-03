// Friend function with multiple Classes

#include <iostream>
using namespace std;

class ABS;
class XYZ
{
    int x;

public:
    void setValue(int i) { x = i; }
    friend void max(XYZ, ABS);
};
class ABS
{
    int a;

public:
    void setValue(int i) { a = i; }
    friend void max(XYZ, ABS);
};

void max(XYZ m, ABS a)
{
    if (m.x > a.a)
    {
        cout << "Number is Greter :" << m.x;
    }
    else
    {
        cout << "Number is Greter :" << a.a;
    }
}
int main()
{
    ABS abs;
    abs.setValue(30);

    XYZ xyz;
    xyz.setValue(70);

    max(xyz, abs);
    return 0;
}
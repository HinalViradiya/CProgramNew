// Write a program to find square a integer and float using inline function.

#include <iostream>
using namespace std;
inline int square(int x)
{
    return (x * x);
}

inline float mul(float x)
{
    return (x * x);
}

int main()
{
    int num1;
    float f;

    cout<<"\nEnter the Number(int) :: ";
    cin>>num1;

    cout<<"\nEnter the Number (Float) ::";
    cin>> f;

    cout<<"\nSquare the "<<num1<<" Number :"<<square(num1);
    cout<<"\nSquare the "<<f<<" Number :"<<mul(f);

    return 0;
}

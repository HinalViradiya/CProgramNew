// cpp program  to find  factorial  by defining  functions outside the class.
#include <iostream>
using namespace std;

class Factorial
{
private:
    int n, n1 = 1, f = 1;

public:
    void input();
    void calc();
    void display();
};

void Factorial ::input()
{
    cout << "Enter The Number :" << endl;
    cin >> n; // 5
}

void Factorial ::calc()
{
    if (n == 0 || n == 1)
    {
       // cout << "Factorial of " << n << " is " << n1 << endl;
    }
    else
    {
        do
        {
            n1 = f * n1;  
            f++;         
        } while (f <= n);
    }
}

void Factorial :: display(){
     cout << "Factorial of " << n << " is " << n1 << endl;
}
int main()
{

    Factorial f ;
    f.input();
    f.calc();
    f.display();

    return 0;
}

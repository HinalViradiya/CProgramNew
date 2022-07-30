// Write a program add a two complex number passing objects as argument.
#include <iostream>
using namespace std;

class Complex
{
    int re, im;

public:
    void get()
    {
        cout << "\nEnter Real Part :: ";
        cin >> re;
        cout << "\nEnter Imag. Part :: ";
        cin >> im;
    }

    void disp()
    {
        cout << re << "+" << im << "i"
             << "\n";
    }
    void sum(Complex, Complex);  // Object passed as argument.
};

void Complex::sum(Complex c1, Complex c2)
{
    re = c1.re + c2.re;
    im = c1.im + c2.im;
}

int main()
{
    Complex c1, c2, c3;
    int n;
    cout << "Enter 1st complex no.: \n";
    c1.get();
    cout << "\nEnter 2nd complex no.: \n";
    c2.get();
    cout << "\nThe 1st complex no. is :: ";
    c1.disp();
    cout << "\nThe 2nd complex no. is :: ";
    c2.disp();

    c3.sum(c1, c2);

    cout << "\nThe Sum of two complex no.s are :: ";
    c3.disp();

    return 0;
}
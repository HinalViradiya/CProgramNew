// Operator Of Cpp

#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 2;

    //"ArithMatic Operator :
    cout << "\nArithMatic Operator :" << endl;
    cout << "Addition :" << a + b << endl;
    cout << "Subtraction : " << a - b << endl;
    cout << "Multiplication : " << a * b << endl;
    cout << "Division : " << a / b << endl;
    cout << "Modulo : " << a % b << endl;

    // Increment & Decrement Operator
    cout << a++ << endl;
    cout << a << endl;

    cout << ++a << endl;
    cout << a << endl;

    cout << --b << endl;
    cout << b << endl;

    cout << b++ << endl;
    cout << b << endl;

    // Relational And Logical Operator
    int p = 1, q = 0, r = 9, s = 7;

    cout << "\n Relational And Logical Operator:" << endl;
    cout << "Local And" << (p && q) << endl;
    cout << "Local Or" << (p || q) << endl;
    cout << "Local not" << (!q) << endl;

    cout << "Relational " << (p <= q) << endl;
    cout << "Relational " << (p != q) << endl;

    // Bitwise Operator and Shift Operator
    cout << "\nBitwise Operator and Shift Operator:" << endl;
    p = 10, q = 7, r = 12, s = 20;

    cout << "Bitwise And & " << (p & q) << endl;
    cout << "Bitwise Or | " << (p | q) << endl;
    cout << "Bitwise not ^ " << (p ^ q) << endl;
    cout << "Bitwise twist ~ " << (~q) << endl;
    cout << "Shift op " << (10 << 2) << endl;
    cout << "Shift op " << (10 >> 2) << endl;

    // Assignment Op
    p += 5;
    cout << "Assignment Op " << p << endl;

    // Ternary Operator
    cout << "Ternary Operator " << ((r > s) ? r : s) << endl;

    return 0;
}
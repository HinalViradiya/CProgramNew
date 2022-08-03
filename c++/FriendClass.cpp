// Friend Class

#include <iostream>
using namespace std;
class ClassA; // forwad declaration of class

class ClassB
{
private:
    int numB;
    friend class ClassA;

public:
    ClassB() : numB(12) {}
};

class ClassA
{
private:
    int numA;

public:
    ClassA() : numA(24) {}
    int add()
    {
        ClassB objb;
        return objb.numB + numA;
    }
};

int main()
{
    ClassA objectA;
    cout << "Sum :" << objectA.add();
    return 0;
}

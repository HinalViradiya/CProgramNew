// Virtual function  and Function Overriding.

#include <iostream>
using namespace std;
class A // Abstract class bcz of in that class we declaire pure virtual function & can not create objct of abstract class
{
    int x = 5;

public:
    virtual void display() = 0; // pure virtual function
};
class B : public A
{
    int y = 10;

public:
    void display()
    {
        std::cout << "Value of y is : " << y << std::endl;
    }
};

int main()
{
    //A *a;
    B b;   
    b.display(); // late binding
    return 0;
}
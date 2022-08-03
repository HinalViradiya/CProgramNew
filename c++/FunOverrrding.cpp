// Function Overriding

#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void eat()
    {
        cout << "\nI'm eating generic food.";
    }

    void show()
    {
        cout << "\nShow base Classes\n";
    }
};

class Dog : public Animal
{
public:
    void eat()
    {
        cout << "\nEating cat...";
    }

    void show()
    {
        cout << "\nShow Derive Classes\n";
    }
};
// void func(Animal *xyz) { xyz->eat(); }

int main(void)
{

    Animal *a, base;
    Dog d;
    a = &d;
    a->eat(); // call Derive class method
    a = &base;
    a->eat(); // call Base class method
    return 0;
}

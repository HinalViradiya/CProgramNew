// Frien Function to access private data of the class
#include <iostream>
using namespace std;

class Class2;
class Class1
{
    int value1;

public:
    void indata(int a) { value1 = a; };
    void diplay(void) { cout << value1 << "\n"; }
    friend void exchange(class1 &, class2 &);
};
class Class2
{
    int value2;

public:
    void inData(int b) { value2 = b; }
    void display() { cout << value2 << "\n"; }
    friend void exchange(class1 &, class2 &);
};

void exchnage(Class1 &c1, Class2 &c2)
{
    int temp = c1.value1;
    c1.value1 = c2.value2;
    c2.value2 = temp;
}
int main()
{
    Class1 c1;
    Class2 c2;

    c1.indata(100);
    c2.inData(200);

    cout << "Value befor exchnage :";
    c1.diplay();
    c1.diplay();

    cout << "Value after exchnage :";
    exchange(c1, c2);
    c1.diplay();
    c1.diplay();
    return 0;
}
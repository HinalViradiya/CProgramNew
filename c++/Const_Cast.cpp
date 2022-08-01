// Const Cast operator

#include <iostream>
using namespace std;

class Student
{
private:
    int roll;

public:
    Student(int r) : roll(r) {}
    void fun() const
    {
        (const_cast<Student *>(this))->roll = 5;
    }
    int getRoll()
    {
        return roll;
    }
};
int main()
{
    Student s(3);
    cout << "Old Roll Number :" << s.getRoll() << endl;
    s.fun();
    cout << "New Roll Number :" << s.getRoll() << endl;
}
// Use of Class

#include <iostream> //Include Statement (files)
using namespace std;

class person /// class Declaration
{
    char name[20]; // Member Variable Declaration
    int age;

public:
    void getData(void); // Member Function Declaration
    void putData(void);
};

void person ::getData(void) // Member Function Defination outside the Class
{
    cout << "Enter the Name ::";
    cin >> name;

    cout << "Enter the Age ::";
    cin >> age;
}

void person ::putData(void)
{
    cout << "Name : " << name;
    cout << "Age  : " << age;
}
int main()
{
    person p;    // Class Object Creation
    p.getData(); // Called Member functionn with class object
    p.putData();
    return 0;
}

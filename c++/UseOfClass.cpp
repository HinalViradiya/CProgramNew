// Use of Class

#include <iostream> //include Statement (files)
using namespace std;

class person /// class Declaration
{
    char name[20];  //Member Variable Declaration
    int age;

public:
    void getData(void);  // Member Function Declaration
    void putData(void);
};
void person ::getData(void)
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
    person p;
    p.getData();
    p.putData();
    return 0;
}

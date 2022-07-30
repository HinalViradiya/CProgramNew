// cpp program find largest number from 3 number ny defining the functions inside the class.

#include <iostream>
using namespace std;
class Largest
{
private:
    int a, b, c;

public:
    void setData()
    {
        cout << "Enter the Number1 :";
        cin >> a;

        cout << "Enter the Number2 :";
        cin >> b;

        cout << "Enter the Number3 :";  
        cin >> c;

    }
    int findLargest(){
        if(a > b && a> c){
            return a;
        }else{
            if(b>c){
                return b;
            }else{
                return c;
            }
        }
    }
};


int main()
{
    Largest l;
    l.setData();
    int largestNumber = l.findLargest();
    cout<<"The Number Largest is:"<<largestNumber;
    return 0;
}

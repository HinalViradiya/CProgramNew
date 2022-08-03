#include <iostream>
using namespace std;

class Sample
{
    int a;
    int b;

public:
    void setValue()
    {
        a = 25;
        b = 40;
    }
    friend float mean(Sample s);
};

float mean(Sample s)
{
    return float(s.a + s.b) / 2.0;
}

int main(){
    Sample sa;
    sa.setValue();
    cout<<" Mean Value : "<< mean(sa);
     return 0;
}
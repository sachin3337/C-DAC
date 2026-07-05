#include <iostream>
using namespace std;
// inheritance

class Base
{

    int num1;

public:
    void f1()
    {
        cout << "Base:: f1()" << endl;
    }
};

class Derived : public Base
{
    int num2;
    // int num1;

public:
    // void f1()
    //     {
    //         cout << "Base:: f1()" << endl;
    //     }
    void f2()
    {
        cout << "Derived::f2" << endl;
    }
};

int main()
{
    Derived d1;
    cout << "sixe of Derived " << sizeof(d1) << endl;
    d1.f1();
    d1.f2();
}
int main1()
{
    Base p1;
    cout << "sixe of parent " << sizeof(p1) << endl;
    p1.f1();
    return 0;
}

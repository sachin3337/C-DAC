#include <iostream>
using namespace std;
// you cannot create object from this class
class Base // abstract class
{

    int num1;

public:
    virtual void f1()
    {
        cout << "Base::f1()" << endl;
    }

    virtual void f3() = 0; // pure virtual function
};

class Derived : public Base
{
    int num2;
    // int num1;

public:
    // void f1()
    // {
    //     cout<<"Base::f1()"<<endl;
    // }
    void f2()
    {

        cout << "Derived::f2()" << endl;
    }
    // function overriding
    void f1() override
    {
        cout << "Derived::f1()" << endl;
    }
    void f3() override
    {
        cout << "Derived::f3()" << endl;
    }
};

int main()
{
    // Base b; //error
    Base *b = new Derived();
    b->f1(); // Derived class f1
    b->f3();
}

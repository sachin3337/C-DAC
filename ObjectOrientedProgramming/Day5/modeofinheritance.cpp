#include <iostream>
using namespace std;
// mode of inheritance
// when you use the access specifer to extend the class and using that access
// specifier we control the base class data member's visibility into the derived class

class Base
{

private: // access specifier
    int num1;

protected:
    int num2;

public:
    int num3;

    void printBase()
    {
        cout << num1 << num2 << num3;
    }

    friend void printBaseOutsideclass();
};

// mode of inheritance is a public
// by default mode of inheritance is private

class Derived : protected Base
{
    void printDerived()
    {
        cout << num1 << num2 << num3;
    }
};

class Indirect : Derived
{
    void printIndirect()
    {
        cout << num1 << num2 << num3;
    }
};

void printBaseOutsideclass()
{
    Base b1;
    cout << b1.num1 << b1.num2 << b1.num3;
}

int main()
{

    Base b1;
    b1.num1;
    b1.num2;
    b1.num3;

    Derived d1;
    d1.num1;
    d1.num2;
    d1.num3;

    Indirect d2;
    d2.num3;
}

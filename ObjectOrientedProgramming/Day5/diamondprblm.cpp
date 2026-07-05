#include <iostream>
using namespace std;
// diamond problem
class A
{ // parent class

public:
    int num1;

    void printA()
    {
        cout << num1;
    }
};

class B : virtual public A
{

public:
    // num1
    int num2;

    void printB()
    {
        cout << num2 << num1;
    }
};

class C : virtual public A
{
public:
    // num1
    int num3;

    void printC()
    {
        cout << num3 << num1;
    }
};

class D : public B, public C
{
public:
    int num4;
    void printD()
    {
        cout << num4 << num3 << num2 << num1;
    }
};
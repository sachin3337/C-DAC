#include <iostream>
using namespace std;
// copy ctor

class Complex
{

    int real;
    int imag;

public:
    Complex(int real = 0, int imag = 0)
    {
        cout << " ctor gets called " << endl;
        this->real = real;
        this->imag = imag;
    }
    // this=&c2
    Complex(const Complex &c1)
    {

        // shallow copy
        cout << "copy ctor gets called " << endl;
        this->real = c1.real;
        this->imag = c1.imag;
    }

    void printComplex()
    {
        // a+ib
        cout << " " << real << " +i " << imag << endl;
    }

    Complex sum(Complex other) // copy
    {
        Complex temp;
        temp.real = this->real + other.real;
        temp.imag = this->imag + other.imag;
        return temp; // copy
    }
};

int main()
{
    Complex c1(10, 20);
    Complex c2(20, 30);
    Complex c3 = c1.sum(c2); // copy
    c3.printComplex();
}
int main1()
{
    Complex c1(10, 20);
    c1.printComplex();
    Complex c2 = c1;   // copy  //Complex c2(c1);
                       // Complex(&c2,c1);
    c2.printComplex(); // 10 20
}

#include <iostream>
using namespace std;
// operator overloading

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

    void printComplex()
    {
        // a+ib
        cout << " " << real << " +i " << imag << endl;
    }

    // Complex sum(Complex other)
    // {
    //     Complex temp;
    //     temp.real = this->real + other.real;
    //     temp.imag = this->imag + other.imag;
    //     return temp;
    // }
    Complex operator+(Complex other)
    {
        Complex temp;
        temp.real = this->real + other.real;
        temp.imag = this->imag + other.imag;
        return temp;
    }

    friend Complex operator-(Complex c1, Complex c2);
};

Complex operator-(Complex c1, Complex c2)
{
    Complex temp;
    temp.real = c1.real - c2.real;
    temp.imag = c1.imag - c2.imag;
    return temp;
}

int main()
{
    Complex c1(10, 20);
    Complex c2(20, 30);
    // Complex c3 = c1.sum(c2);
    // Complex c3 = c1.operator+(c2);
    // Complex c3=operator+(c1,c2);
    Complex c3 = c1 + c2; // 30 50
    c3.printComplex();
    Complex c4 = c1 - c2; // -10 -10
    c4.printComplex();
}

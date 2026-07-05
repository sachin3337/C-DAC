#include <iostream>
using namespace std;
// deep copy
class Complex
{
    int *ptrReal;
    int imag;

public:
    Complex(int real = 0, int imag = 0)
    {
        cout << " ctor called " << endl;
        ptrReal = new int;
        *this->ptrReal = real;
        this->imag = imag;
    }
    // shallow copy fails if you have pointer data type
    // do deep copy
    Complex(const Complex &other)
    {
        cout << "copy ctor called " << endl;
        this->ptrReal = new int;
        *this->ptrReal = *other.ptrReal;
        this->imag = this->imag;
    }
    ~Complex()
    {
        delete ptrReal;
        ptrReal = NULL;
        cout << "destructor gets called " << endl;
    }
};

int main()
{
    Complex c1(10, 20); // normal
    Complex c2 = c1;    // copy ctor
}

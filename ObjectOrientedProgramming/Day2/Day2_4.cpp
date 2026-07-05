
//namespace
#include <stdio.h>
int num1 = 10;

namespace na
{
    int num1 = 30;
    void f1()
    {
    }
    struct t1
    {
    };
}
int main()
{
    int num1 = 20;
    printf("num1=%d\n", num1);
    printf("::num1=%d\n", ::num1); //:: scope resolution operator
    printf("Na::num1= %d\n", na::num1);
}
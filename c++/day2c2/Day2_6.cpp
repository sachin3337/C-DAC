#include <stdio.h>
//splitting the same namespace
namespace na
{
    int num1 = 20;

}

namespace na
{
    int num1 = 30;
}

int main()
{
    printf("na::num1=%d\n", na::num1);
    printf("nb::num1=%d\n", na::num1);
}
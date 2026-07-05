#include <stdio.h>
//we can write different namespaces
namespace na
{
    int num1 = 20;

}

namespace nb
{
    int num1 = 30;
}

int main()
{
    printf("na::num1=%d\n", na::num1);
    printf("nb::num1=%d\n", nb::num1);
}
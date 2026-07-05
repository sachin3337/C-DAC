#include <stdio.h>

// nested namepsace
namespace na // top level namespace
{
    int num1 = 10;
    namespace n1 // nested namespace
    {
        int num2 = 20;
    }
}
namespace nb
{
    int num1 = 30;

    void f1()
    {
        printf("helllo");
    }
}

int main1()
{
    using namespace nb;
    printf("na::num1=%d\n", num1);
    f1();
}

using namespace nb;
int main()
{
    int num1 = 10;

    printf("nb::num1=%d\n", nb::num1);
}
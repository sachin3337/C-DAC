#include <stdio.h>
//bool data type
int main()
{
    int num = 14;
    bool status = false; //  0   default value of bool is false  means 0
    printf("size of status=%d\n ", sizeof(status));
    int i = 2;
    // any non-zero number is consider as 1 status  1 and 0

    while (i < num)
    {
        if (num % i == 0)
        {
            status = true;
        }
        i++;
    }

    if (status == 1)
        printf("It is not prime");
    else
        printf("It is prime");
}
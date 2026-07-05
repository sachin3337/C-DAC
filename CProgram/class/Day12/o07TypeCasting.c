#include<stdio.h>
//Typecasting:- convert the one data type into another data type.
int main()
{
    //1. implici type casting
    int num1 = 123.23;
    printf("\n num1=%d " , num1); //123

    //2. explicit type casting
    double res=(double)5/3;
    printf("\n res= %.2lf", res); //1.67
}
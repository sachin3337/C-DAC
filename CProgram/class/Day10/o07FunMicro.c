#include<stdio.h>
#define PI 3.142 //symbolic constant
#define SIZE 5 //symbolic constant
#define sum( a , b) (a+b) // macro
#define PRINT(var) printf(#var"=%d", var)
#define CMB(a,b) (a##b)
// int sum(int num1 , int  num2)
// {
//     return num1+num2;
// }

//Limitations of macro
//1. Macro are not type safe or macro are not type check
//2. Macro are not used to avoide the programs time overhead
int main()
{
    int num1=10, num2=20;
    int res;
    res=sum(num1, num2); //calling the macro
       //(num1+num2)
    //Note: when we call the macro inside the C program the exapantion code of macro 
    //will replace the macro call.
    PRINT(num1); //printf("num1""=%d", num1);
    PRINT(10);//printf("10"""=%d", 10);
    res= CMB(10,20); //(10##20) =>1020
    printf("\n res=%d", res);
                //     1020 
}
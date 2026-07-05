#include<stdio.h>


//unary operator
//increment , decrement
int main()
{
    //increment operaiton
    int num1=10;
    printf("\n num1=%d", num1); //10
    ++num1; //increment operaiton value in var num1 will be incremented by 1
    //num1=10+1 
    //num1=11

    printf("\n num1=%d", num1); //11

    //decrement operaiton
    --num1;//decrement operaiton value in var num1 will be decrement by 1
    //num1=11-1 
    //num1=10

   printf("\n num1=%d", num1); //10
}
#include<stdio.h>

//logical operator
//short hand operator


int main()
{
    int num1;

     num1 = 10;
    // LHS= constant value;
    // 10=12; // not

    printf("\n num1=%d ", num1);

    num1+= 4; //short hand plus
    /*
        num1+= 4; //short hand plus
    
        num1=num1+4
            =10 + 4
        num1 = 14
    */
     printf("\n num1+= 4;   num1=%d ", num1); //14

     num1-=2;
    printf("\n num1-= 4;   num1=%d ", num1); //12
      /*
        num1-= 2; //short hand min
    
        num1=num1-2
            =14 -2
        num1 = 12
    */

    
}
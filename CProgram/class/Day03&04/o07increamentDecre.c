#include<stdio.h>


//unary operator

//preincrement and predecrement
int main()
{
    //preincrement operaiton
    int num1=10;
    int res;
    res=++num1;  // preincrement
  // LHS = RHS
    /*
         res=++num1;
        preincrement
        1. 1st value of num1 will be incrementd by 1
            ++num1 
            num1=num1+1
                =10 + 1
            num1 =11
        2. new incremented value of num1 will be assigned in res.
            res=num1
            res= 11
    
    */

    printf("\n preincrement operaiton\n num1=%d", num1); //11
    printf("\n res=%d", res); //11
    
    num1=10;

    res= --num1; // predecrement operaiton
    /*
         res=--num1;
        predecrement
        1. 1st value of num1 will be decremented by 1
            --num1 
            num1=num1-1
                =10 - 1
            num1 =9
        2. new decremented value of num1 will be assigned in res.
            res=num1
            res= 9
    
    */

    printf("\n predecrement operaiton=>\n num1=%d", num1); //9
    printf("\n res=%d", res); //9
    
}
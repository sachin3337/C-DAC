#include<stdio.h>


//unary operator
//postincrement and postdecrement
int main()
{

    int num1=10;

    int res;
    res= num1++; //post increment 
    //LHS = RHS
    /*
        post increment 
         res= num1++;
        1. 1st it will assign the current value of num1(without increment) into res var
            res= num1
            res= 10
        2. after assignment operaiton it will increment the value of num1
            num1= num1+1
                =10+1
            num1=11;
    */

    printf("\n postincrement operaiton\n num1=%d", num1); //11
    printf("\n res=%d", res); //10

    num1=10;
    res=num1--; //postdecrement operaiton

    /*
        postdecrement operaiton
        res=num1--;
         1. 1st it will assign the current value of num1(without decrement) into res var
            res= num1
            res= 10
        2. after assignment operaiton it will decrement the value of num1
            num1= num1-1
                =10-1
            num1=9;
    */
      printf("\n postdecrement operaiton\n num1=%d", num1); //9
    printf("\n res=%d", res); //10
}
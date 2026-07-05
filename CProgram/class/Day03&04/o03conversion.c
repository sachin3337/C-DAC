#include<stdio.h>


//dec, hex, oct constant
int main()
{
    int num1=12; //12 dec => constant value 
    int num2=014; //014 oct => constant value 
    int num3= 0X14;// 0X14 hex => constant value
    //dec to dec
    printf("\n dec to dec num1 => %d", num1 );  //c

    //dec to hex
    printf("\n dec to hex num1 => %x", num1 );  //c

    //dec to oct
    printf("\n dec to oct num1 => %o", num1 );  //14

    //oct to oct
     printf("\n oct to oct num2 => %o", num2 );  //14

     //oct to hex
     printf("\n oct to hex num2 => %x", num2 );  //c

     //oct to dec
     printf("\n oct to dec num2 => %d", num2 );  //12

     //hex to oct
     printf("\n hex to oct  num3 => %o", num3 );  //24

     //hex to hex
     printf("\n hex to hex num3 => %x", num3 );  //14

     //hex to dec
     printf("\n hex to dec num3 => %d", num3 );  //20
}
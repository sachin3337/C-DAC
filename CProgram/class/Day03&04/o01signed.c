#include<stdio.h>


//signed
int main()
{
   signed char num1 =128;
   char ch; //signed by default
   printf("\n num1=%d", num1);// -128
   num1=129; 
   printf("\n num1=%d", num1); //-127
    num1=130;
   printf("\n num1=%d", num1); //-126

   /*
        Find the range of signed char
        signed char num1 =128;
        char => 1 byte => 8 bit 

        = 2 res to pow (8 -1 ) -1
        = 2 res to pow ( 7 ) - 1 
        =128 -1 
        =127
        range of signed char -128 to 127 
   */


   signed int num2;
   int num3; //signed by default
   /*
        Find the range of signed int
        signed int num1;
        int => 4 byte => 4*8 bit => 32 bit
        = 2 res to pow (32 -1 ) -1
        = 2 res to pow ( 31 ) - 1 
        =2,14,74,83,648-1 
        =2,14,74,83,647

        range of signed int from  -2,14,74,83,648 to 2,14,74,83,647
   */

}


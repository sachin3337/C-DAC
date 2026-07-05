#include<stdio.h>
// ternary operator
int main()
{

    int num1=30;
    int num2=20;

    //Q. Find the largest number outof num1 and num2 ?
    //sol:-num1 and num2 compair
    // ternary op
    // operand1 ?   operand2                            : operand3
   //condition ?   true part                            : false part
    num1<num2 ? printf("\n num2 is the largest number") : printf("\n num1 is the largest number");
    //10<20 =>1 => true part => num2 is largest
    //30<20 =>0 => false part => num1 is largest



}
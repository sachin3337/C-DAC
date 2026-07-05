#include<stdio.h>

int main(){
    int num1 = 10;
    int num2 = 20;

    // Q find the largest number outof num1 and num2 
    // ternary op
    // Operand1 ? operand2  : operand3
    // consition ? true part  (denote using =>(1))  : false part     (denote using =>(0))
    (num1<num2) ? printf("\n num2 is largest number \n") :printf("\n num1 is largest number \n");
}
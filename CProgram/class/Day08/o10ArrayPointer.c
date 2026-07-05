#include<stdio.h>
 
// array of pointer
int main()
{
    int num1=10, num2=20, num3=30;
    int * parr[3];
    parr[0]= &num1;//in array of pointer parr 1st element at index 0 holding an address of num1
    parr[1]= &num2;//in array of pointer parr 2nd element at index 1 holding an address of num2
    parr[2]= &num3;//in array of pointer parr 3rd element at index 2 holding an address of num3

    printf("\n parr[0] =%u ", parr[0]); // address of num1 ;
     printf("\n value at parr[0] =%u ", *parr[0]); //10
    printf("\n parr[1] =%u ", parr[1]); // address of num1 ;
    printf("\n value at parr[1] =%u ", *parr[1]); //20
    printf("\n parr[2] =%u ", parr[2]); // address of num1 ;
    printf("\n value at parr[2] =%u ", *parr[2]); //30
}
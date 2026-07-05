#include<stdio.h>
//pointer:- pointer is a variable which will hold an address of another variable

int main()
{
    int num1=10;
    //syntax:- dataType * pointerName = &variableName;
    int * ptr= &num1; //ptr is pointer to int which Initialization with an address
    //num1 variable

    printf("\n address of num1=%u",&num1 ); //100
    printf("\n ptr =%u", ptr); // 100

    //Q. How to access the value of variable num1 using Pointer variable ptr ?
    // Ans:- derefer the pointer variable


    //dereferencing operation
    printf("\n value at pointer ptr=%d", *ptr); //value at address 100 => 10




}
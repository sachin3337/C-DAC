#include<stdio.h>

//function pointer
void display(int num1) //10 //20
{
    printf("\n num1=%d", num1); //10 //20
}

int main()
{
    //Q. How to access an address of a function
    // ans: 1. function name
        // 2. & function name

        // 1. function name
        printf("\n address of function display()= %u", display);

        // 2. & function name
         printf("\n address of function display()= %u", &display);

         //Q. How to store an address of a function into the variable
         //ans:- using function pointer

        //  function pointer
        // returnType (* pointerName) (datatype of argumnets) = address of function;
        // void display(int num1)
           void (* fptr) (int ) = display;
        

           fptr(10);

           void (* fptr1) (int) = &display;
            fptr1(20);


    }
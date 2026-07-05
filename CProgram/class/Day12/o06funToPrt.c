#include<stdio.h>
//function pointer
         //   10  ,     20
void sum(int num1, int num2)
{
    printf("\n sum=%d" , num1 +num2);
                        //10 + 20 => 30
}


int main()
{
    //Q. declare the function pointer for the sum function and call the function to
    //add 2 int inputs ?
    // void sum(int num1, int num2)
    void (* fptr) (int, int );  //declaration of function pointer
    fptr=sum; // assigning an address of sum functioninto function pointetr

    fptr(10,20); //call the functio using function pointer

}

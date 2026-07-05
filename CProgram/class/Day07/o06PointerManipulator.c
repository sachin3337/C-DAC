#include<stdio.h>
//pointer manipulation (changing the value of variable using pointer var)

int main()
{
    int num1 =10;
    int * ptr=&num1; //pointer ptr is holding an address of num1
    //Q. Modify the value of variable num1 to 20 using pointer variable ptr ?
    printf("\n value at ptr=%d" , *ptr);// value at address  ptr => 10
    *ptr = 20;  //pointer manipulation
    printf("\n value at ptr=%d" , *ptr);// value at address  ptr => 20
  
}
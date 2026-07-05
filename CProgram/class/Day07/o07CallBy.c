#include<stdio.h>
// call by value 

// call by value
         //   10 ,       20
int sumpro(int n1 , int  n2) 
{
    int sum = n1+ n2;
     //       10 + 20 => 30
    int pro= n1*n2;
             //10*20 => 200

    return pro , sum;
    //Note:- we can not return the multiple values from the body of function
    //at a time

}


int main()
{
    //Q. write a function called as sumpro() which will calculate addition and multiplication
    // of 2 int numbers and return the multiple result ?

    int num1=10,  num2=20;
   int res= sumpro(num1,num2); // call by value 
                   //10, 20
    printf("\n res= %d", res); //200

}
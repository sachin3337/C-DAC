#include<stdio.h>
// call by address

// sumpro(&num1,&num2, &sum, &pro);
void sumpro(int * n1 , int * n2, int *s, int * p ) //call by address
{
    int sum =  *n1 + *n2;
             // 10 + 20 => 30
    int pro = *n1 * *n2;
            //  10*20 => 200
    *s=sum;
    *p = pro;          

}

int main()
{
    //Q. write a function called as sumpro() which will calculate addition and multiplication
    // of 2 int numbers and return the multiple result ?

    int num1=10,  num2=20, sum , pro; //local variable declared main()
    sumpro(&num1,&num2, &sum, &pro); // call by address 
                   
   printf("\n sum=%d", sum);
   printf("\n pro=%d", pro);

}
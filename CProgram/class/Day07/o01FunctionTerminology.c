#include<stdio.h>
//function and its terminologies
int add(int num1, int num2)  //a and b are formal arguments
{       //body of function
        int res;    //local variable
        //   50 +100 =>150
        //  30+40 =>70
        res=num1+num2; //30
        return res;//30//70
}

void hi()
{
        //body of function
        printf("\n Hi...!");                               
}

int main()                                      
{                                               
        int num1=10, num2=20;
        //Q. add num1 and num2;                 num1        num2     res
        int res;                              //   10        20         G  
        res=add(num1,num2); //here num2 and num2 are actual arguments
      //  30         10    20
     printf("%d", res);
}  
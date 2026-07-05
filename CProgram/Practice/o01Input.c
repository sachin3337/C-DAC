#include <stdio.h>

int main(){
    // accept to number and perform addition, multiplication, subtraction

    //signed (ans is in negative or positive)
    int num1, num2;
    printf("\n Enter two Number : ");
    scanf("\n %d \n %d", &num1, &num2);

    int sum  = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;

    printf("\n Addition is : %d, subtration is : %d, Multiplication is : %d",sum, sub,mul);


    // Unsigned use when ans is in positive 
    unsigned int a, b;
    printf("\n Enter two Number : ");
    scanf("\n %d \n %d", &a, &b);

    unsigned int sum1  = a + b;
    unsigned int sub1 = a - b;
    unsigned int mul1 = a * b;

    printf("\n Addition is : %d, subtration is : %d, Multiplication is : %d",sum1, sub1,mul1);

    printf("\n *\n ** \n *** \n **** \n *****");

    return 0;
}

// Write a program to Accept two numbers and
// a. find its sum.
// b. find its difference.
// c. find its product.
// Test the program using different integral data type signed/unsigned char/int/long.
// First test the result using small values. Then test the same program using large values.
// Observe the results.


#include<stdio.h>

int main(){
    int num1 ;
    printf("\n Enter the Number => ");
    scanf("%d",&num1);

    int num2 ;
    printf("\n Enter the Number => ");
    scanf("%d",&num2);

    printf("Number is => %d \n",num1);
    printf("Number is => %d \n",num2);


    int sum = num1 + num2;
    printf("\n Sum of Number is => %d", sum);

    int diff = num1 - num2;
    printf("\n Sum of Number is => %d", diff);

    int pro = num1 * num2;
    printf("\n Sum of Number is => %d", pro);


    signed char num = 127; // char -128 to 127
    printf("\n Signed of Number is => %d", num);
    
    num = 158;
    printf("\n Signed of Number is => %d", num); // round


     unsigned char ch=128;
    printf("\n ch=%d",ch );//128
    
    ch=256;
    printf("\n ch=%d",ch );//0
    ch=257;
    printf("\n ch=%d",ch );//1
    ch=258;
    printf("\n ch=%d",ch );//2
    
   
}
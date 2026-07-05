// Write a program to accept three integer numbers and find its average.


#include<stdio.h>

int main(){
     int num1 ;
    printf("\n Enter the Number => ");
    scanf("%d",&num1);

    int num2 ;
    printf("\n Enter the Number => ");
    scanf("%d",&num2);

    int num3 ;
    printf("\n Enter the Number => ");
    scanf("%d",&num3);

    printf("Number is => %d \n",num1);
    printf("Number is => %d \n",num2);
    printf("Number is => %d \n",num3);

    int avg = (num1 + num2 + num3) / 3;
    printf("Average Of Number is => %d  ", avg);
}
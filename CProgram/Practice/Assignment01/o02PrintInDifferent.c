
// Write a program to accept a number and print the number in character, decimal, octal and hex
// formats.

#include<stdio.h>

int main(){
    int num ;
    printf("\n Enter the Number => ");
    scanf("%d",&num);
    printf("Number is => %d",num);

    // charecter form
    printf("\n char Of number is => %c", num);

    // dec
    printf("\n decimal Of number is => %d", num);

    // hex
    printf("\n hexadicimal Of number is => %x", num);

    // oct
    printf("\n octal Of number is => %o \n", num);
}
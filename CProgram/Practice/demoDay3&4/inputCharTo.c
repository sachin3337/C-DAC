#include<stdio.h>

int main(){
    char num ;
    printf("\n Enter the Number => ");
    scanf("%c",&num);
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
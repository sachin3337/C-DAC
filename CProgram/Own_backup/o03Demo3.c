#include<stdio.h>


int main(){
    int num1 ; // decleration // 4 byte will be allocated  into stack section and garbage vlaue
    // will be initialized within num1 var.

    printf("\n num1= %d", num1);


    // value of num is changed
    num1 = 120; // assignment
    printf("\n num1= %d", num1);

    int res = printf("\nsachin"); // sachin => 6 char
    printf("\n %d", res); //  6



    // escap sequence
    printf("\n sjlghjhgsdjghljds");

    printf("\t sjlghj \t hgsdjghljds"); // tab space 
    printf("\v  sjlghjhgsdjghljds"); // next line + multiple space
    printf(" \n sachin ghusinge \r ABCD"); // replace first 4 with ABCD
    printf(" \n sachin ghusinge\b\b\b\bABCD"); // replace last 4 with ABCD













printf("\n");
    return 0;
}
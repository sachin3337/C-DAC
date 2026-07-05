#include<stdio.h>


//scanf()
int main()
{
    char ch;
    int num1;
    double dvar;
    //Q. read or accept the value for ch,  num1 and dvar  var from the user ?
    // syntax=>
    // scanf("formatspecifier", addressOfVariavle);
    //how to access an address of variable
    //&variableName;
    // printf("\n Enter the value of ch=");
    // scanf("%c",&ch);
    // printf("\n ch=%c", ch); //'A'

    // printf("\n address of num1=%u",&num1 ); //100

    // printf("\n Enter the value for num1=");
    // scanf("%d", &num1 ); 
    // printf("\n num1=%d", num1);//25

    printf("\n Enter the value for dvar=");
    scanf("%lf", &dvar );//123.23
     
    printf("\n dvar=%.2lf", dvar);//123.23
}
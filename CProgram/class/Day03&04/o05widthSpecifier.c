#include<stdio.h>


//width specifier
int main()
{

    int num1=12;
    printf("%d\n",num1) ;//12
    
    printf("%4d\n",num1) ;//__12 => 2 space + 2 dig output => 4 char
    int num2=123;
   
    printf("%7d\n",num2) ; //____123=>  4 spaces + 3 dig output => 7 char

    printf("%-4dok\n",num1);//12__ok

    printf("%-6dok\n", num2); //123___ok // 3 dig + 3 spaces =>-6

    double dvar=12.48; //Note:- include the . operator while calculating the char lenght
    printf("%6.2lf\n",dvar);//_12.48 => 1 scape + 5 dig o/p => 6.2

    printf("%8.3lf",dvar);//__12.480 // 2 spaces + 6 dig o/p =>8.3
}
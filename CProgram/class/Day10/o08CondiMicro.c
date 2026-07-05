#include<stdio.h>
// #define PI 3.142

//conditional compilation
int main()
{
    //Q. Check wheather the symbolic constant PI is declared or not 
    //before the compilation process ?
    #if defined(PI)
        printf("PI is defined");
    #else
        printf("PI is not defined");
    #endif
}
#include<stdio.h>
int num1=10;  //global scope
static int num2=20; //file scope

void f1(int num3)   //function scope
{

}
int main()
{
    int num4=20;  //local scope

    void f2(int num5);  //prototype scope
}
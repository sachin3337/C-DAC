#include<stdio.h>
//string in RO data section
int main()
{ 
  char* str1="Sunbeam"; //string will be strored in RO data section
  char * str2="Sunbeam"; //string will be strored in RO data section

    if(str1==str2) //compair the address
    {
        printf("\n same");
    }
    else
    {
        printf("\n not same");
    }
}
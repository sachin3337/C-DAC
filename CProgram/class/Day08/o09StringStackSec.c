#include<stdio.h>
#include<string.h>
//string
int main()
{
            //    0   1    2    3    4      5    6    7     8
   char str1[] ={'A','B', 'C','\0', 'D' , 'E' , 'F' , 'G', 'H'};// stack section// string
              // 100 101
    printf("\n %s", str1); //ABC
    printf("\n sizeof string str1=%d", sizeof(str1)); //9 byte
    printf("\n lenght of string str1=%d", strlen(str1)); //3 char 
}
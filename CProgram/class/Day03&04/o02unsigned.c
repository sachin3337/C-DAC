#include<stdio.h>


//unsigned
int main()
{   
    unsigned char ch=128;
    printf("\n ch=%d",ch );//128
    ch=255;
    printf("\n ch=%d",ch );//255
    
    ch=256;
    printf("\n ch=%d",ch );//0
    ch=257;
    printf("\n ch=%d",ch );//1
    ch=258;
    printf("\n ch=%d",ch );//2
    
    /*

         Find the range of unsigned char 
         char=> 1byte => 8 bit 

         =2 res to pow(8) -1 
         = 256 - 1
         =255
         range of unsigned char from 0 to 255
    */

    unsigned int num1;
    /*

          Find the range of unsigned int 
            unsigned int num1;
         int => 4 byte => 4* 8  => 32 bit 

         =2 res to pow(32) -1 
         = 4,29,49,67,296 - 1
         =4,29,49,67,295
         range of unsigned int from 0 to 4,29,49,67,295
    
    
    
    */


}
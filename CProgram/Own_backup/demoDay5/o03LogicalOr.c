#include<stdio.h>

int main(){
    printf("\n Logical OR ==> Any one condition is true then out is true(1) ");
    printf("\n Logical OR ==> Both condition is false then out is false(0) \n ");
   int res;
   res = 10 || 20; // 1
   printf("\n res = %d \n", res);

   res = (10!=10) || (20!=20); // 0
   printf("\n res = %d \n", res);

   res = -10 || (22!=22); // 1
   printf("\n res = %d \n", res);
}
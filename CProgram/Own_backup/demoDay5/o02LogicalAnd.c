#include<stdio.h>

int main(){
   int res;
   res = 10 && 20; // 1
   printf("\n res = %d \n", res);

   res = (10==10) && (20==20); // 1
   printf("\n res = %d \n", res);

   res = -10 && (22!=22); // 0
   printf("\n res = %d \n", res);
}
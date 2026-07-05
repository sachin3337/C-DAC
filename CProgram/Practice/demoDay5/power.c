// Write a function to calculate power.

#include<stdio.h>

int main(){
    int n;

    printf("Enter the Number => ");
    scanf("%d", &n);

    int p;
    printf("Enter the POW Of Number => ");
    scanf("%d", &p);

    int pow = 1;
    for(int i =1; i<=p; i++){
        pow *= n;
    }

    printf("%d \n",pow);
}
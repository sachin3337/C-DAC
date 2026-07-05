// Write a function to calculate factorial of a given number.

#include<stdio.h>

int main(){
    int n;

    printf("Enter the Number => ");
    scanf("%d", &n);
    int fact = 1;
    for(int i =1; i<=n; i++){
        fact *= i;
    }

    printf("%d \n",fact);
}
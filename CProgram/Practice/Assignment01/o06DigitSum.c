// Write a program to accept a 4 digit number and
// a. Display face value of each decimal digit
// b. Display place value of each decimal digit
// c. Display no in reverse order by changing decimal place values
// If user enters a 4 digit number 9361 output should be
// a. 9 3 6 1
// b. 9361 = 9 000 + 300 + 60 + 1
// c. 1639

#include<stdio.h>

int main(){

    int num2 ;
    printf("\n Enter the Number => ");
    scanf("%d",&num2);

    printf("Number is => %d \n",num2);

    int a, b, c, d;
    a = num2%10; num2 /= 10;
    printf("%d ",a);
    b = num2%10; num2 /= 10;
    printf("%d ",b);

    c = num2%10; num2 /= 10;
    printf("%d ",c);

    d = num2%10; num2 /= 10;
    printf("%d ",d);

}
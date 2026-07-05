#include<stdio.h>
#define PI 3.142 //symbolic constant
#define SIZE 5 //symbolic constant

int main()
{

    // double PI=3.142;
    double rad=123.23;
    int arr[SIZE]; 
           // 5
    printf("\n area of circle=%.3lf", PI * rad* rad);
                              //      3.142 * rad* rad
    printf("\n line number =%d", __LINE__); 
                            //   14
    printf("\n file name =%s", __FILE__); //file name
    printf("\n Date =%s", __DATE__); //current date
    printf("\n Time =%s", __TIME__); //current time
    
}
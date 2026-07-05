#include<stdio.h>

//break
int main()
{

    for(int i=0;i<5; i++)
    {
        printf("\n Hello Students");
        
        break;// jump stmt break will terminate the for loop

        printf("\n Hello Sunbeam\n"); //this stmt will be skipped(never be executed)
        
    }

}
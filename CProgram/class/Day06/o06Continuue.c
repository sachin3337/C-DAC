#include<stdio.h>

//continue
int main()
{

    for(int i=0;i<5; i++)
    {
        printf("\n Hello Students");
        
        continue;// jump stmt continue will continue the for loop, but it 
        //skip the stmt after continue

        printf("\n Hello Sunbeam\n"); //this stmt will be skipped(never be executed)
        
    }

}
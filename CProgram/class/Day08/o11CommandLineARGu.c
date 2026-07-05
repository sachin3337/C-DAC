#include<stdio.h>
#include<stdlib.h>
 
// command line argument
 //  0      1   2 
// .\a.exe 10  20
         //  3
int main(int argc ,  char * argv[])
{                          
                          //argv[0] =  ".\a.exe"    
                          // argv[1]= "10"
                          // argv[2]= "20"

    //argc => contain total number of arguments
    printf("\nargc=%d", argc); //3
    printf("\n argv[0]=%s", argv[0]); // name of program or path + name of program
    printf("\n argv[1]=%s", argv[1]); // "10" => string not the int 10
    printf("\n argv[2]=%s", argv[2]); // "20" => string not the int 20

    //Q. add command line argument 10 and 20 in int format ?
    //convert string "10" into int 10 and convert string "20" into int 20 
    //then performth addition op
    int a=atoi(argv[1]); //atoi is predefined lib function , which convert the string into int value
    int b=atoi(argv[2]); //atoi is predefined lib function , which convert the string into int value
    int res= a+b;//10+20 => 30
    printf("\n res=%d", res); //30

}
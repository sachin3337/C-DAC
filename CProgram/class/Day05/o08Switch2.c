#include<stdio.h>

// switch case

//Q. Display the menu of days of week and ask end user(take input) which day of week
//he / she want to print ? 


int main()
{
    char ch;
    printf("\n S. Sun");
    printf("\n M. Mon");
    printf("\n t. Tue");
    printf("\n W. Wed");
    printf("\n T. Thus");
    printf("\n F. Fri");
    printf("\n s. Sat");
    printf("\n Enter your choice=");
    scanf("%c", &ch);//'M'
    switch(ch) //'M'
    {
        default: //invalid case value
            printf("Invalid choice...!"); 
            break;
        case 'S': //'M' == 'S' => 0
            printf("Sun");
            break; //jump stmt to seperate the 2 cases or to terminate the switch case
        case 'M': //'M' == 'M' => 1
            printf("Mon");
            break;
        case 't': //2+1 => 3
            printf("Tue");
            break; 

         case 'W': //2*2 => 4
            printf("Wed");
            break; 

         case 'T':
            printf("Thus");
            break; 

         case 'F':
            printf("Fri");
            break; 

         case 's':
            printf("Sat");
            break; 
    }

    //Note:- in switch case duplicate values for cases are not allowed.
}
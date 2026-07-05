#include<stdio.h>

// switch case

//Q. Display the menu of days of week and ask end user(take input) which day of week
//he / she want to print ? 


int main()
{
    int ch;
    printf("\n 1. Sun");
    printf("\n 2. Mon");
    printf("\n 3. Tue");
    printf("\n 4. Wed");
    printf("\n 5. Thus");
    printf("\n 6. Fri");
    printf("\n 7. Sat");
    printf("\n Enter your choice=");
    scanf("%d", &ch);//2 //8
    switch(ch) //2 //8
    {
        case 1: //2 == 1 => 0
            printf("Sun");
            break; //jump stmt to seperate the 2 cases or to terminate the switch case
        case 2: //2 == 2 => 1
            printf("Mon");
            break; 
        case 3:
            printf("Tue");
            break; 

         case 4:
            printf("Wed");
            break; 

         case 5:
            printf("Thus");
            break; 

         case 6:
            printf("Fri");
            break; 

         case 7:
            printf("Sat");
            break; 
        default: //invalid case value
            printf("Invalid choice...!"); 
            break;
    }
}
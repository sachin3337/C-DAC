#include<stdio.h>

// enum
//check the multiple condition
//Q. Display the menu of days of week and ask end user(take input) which day of week
//he / she want to print ? 

//syntax:- enum enumName{constan values};
// enum week{Sun, Mon, Tue, Wed, Thus, Fri, Sat};
//          //0 , 1  , 2  ,  3 ,  4  ,  5 ,  6   

// enum week{Sun=1, Mon, Tue, Wed, Thus, Fri, Sat};
//          //1   , 2  ,  3 ,  4  ,  5 ,  6 ,  7

// enum week{Sun=1, Mon, Tue, Wed=1, Thus, Fri, Sat};
//          //1   , 2  ,  3 ,  1  ,  2 ,   3 ,  4

// enum week{Sun=-1, Mon, Tue, Wed=-10, Thus, Fri, Sat};


// enum week{Sun=1, Mon, Tue, Wed, Thus, Fri, Sat};
//          //1   , 2  ,  3 ,  4  ,  5 ,  6 ,  7
//Note:- enum may have duplicate value for enum , but if your are using the 
//combination of enum with switch case will not allow the duplicate value in switch case
int main()
{
    enum week{Sun=1, Mon, Tue, Wed, Thus, Fri, Sat};
         //1   , 2  ,  3 ,  4  ,  5 ,  6 ,  7
    //Q. How to declare the var of enum ?
    enum week w1;  // w1 is variable of enum
    printf("\n sizeof w1= %d", sizeof(w1)); // 4 byte
    //inrternally enum is int 

    int ch;
    printf("\n 1. Sun");
    printf("\n 2. Mon");
    printf("\n 3. Tue");
    printf("\n 4. Wed");
    printf("\n 5. Thus");
    printf("\n 6. Fri");
    printf("\n 7. Sat");
    printf("\n Enter your choice=");
    scanf("%d", &ch);//1
    switch(ch) //1
    {
        default: //invalid case value
            printf("Invalid choice...!"); 
            break;
        case Sun: //1 == 1 => 1
            printf("Sun");
            break; 
        case Mon: 
            printf("Mon");
            break;
        case Tue: 
            printf("Tue");
            break; 

         case Wed: 
            printf("Wed");
            break; 

         case Thus:
            printf("Thus");
            break; 

         case Fri:
            printf("Fri");
            break; 

         case Sat:
            printf("Sat");
            break; 
    }
    //Note:- in switch case duplicate values for cases are not allowed.
}
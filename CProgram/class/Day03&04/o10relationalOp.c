#include<stdio.h>


//relational operator(to compair)

int main()
{
    int res;

    //compair 10 , 20
    res= 10<20; //10 is less than 20 => true => 1 
    //Note:- true can be represented by 1 or any non zero value
    printf("\n res= 10<20 =>%d ", res);

    res= 10>20; //10 is greater than 20 => false => 0
     printf("\n res= 10>20; =>%d ", res);

    res= 10 != 20;  // 10 is not equal to 20 => true =>1
     printf("\n res= 10 != 20; =>%d ", res);
  
     res= 10 == 20;   // 10 is equal to 20 => false => 0
    printf("\n   res= 10 == 20; =>%d ", res);
  
    res = 10 == 10; //10 is equal to 10 => 1
     printf("\n   res= 10 == 10; =>%d ", res);

     res = 10 != 10; //10 is not equal to 10 => 0
     printf("\n   res = 10 != 10; =>%d ", res);
  
     res= 10<=10; // lhs is less than or equal to rhs => true
    printf("\n   res= 10<=10; =>%d ", res); // 1
       res= 5<=10; // lhs is less than or equal to rhs => true
    printf("\n   res= 5<=10; =>%d ", res); // 1
  
    res= 5>=10; // lhs is greater than or equal to rhs => true
    printf("\n   res= 5>=10; =>%d ", res); // 0
}
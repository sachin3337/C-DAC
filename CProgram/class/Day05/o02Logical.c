#include<stdio.h>

//logical operator
//logical AND (&&)
int main()
{
    int res;

    res = 10  &&  20; //1
    //   i/p1    i/p2
    printf("\n res= %d", res);

    res= (10==10) && (20==20);
     //     1      &&   1  => 1
       printf("\n res= %d", res);
    
    res = -10 && (11!=20); //1
    //     1  &&  1    => 1
     printf("\n res= %d", res);

    res= (11!=11) && 10;
   //       0     && 1 => 0
     printf("\n res= %d", res);
}



// #include<stdio.h>

// //logical operator
// //logical OR (||)
// int main()
// {
//     int res;

//     res =  -10 || 0;
//     //    1   || 0  => 1  
//     printf("\n res= %d", res);

//     res = (10 == 20 ) || (10<=20);
//     //       0      ||   1  => 1
//       printf("\n res= %d", res);

      
    
// }

// #include<stdio.h>

// //logical operator
// //logical NOT (!)
// int main()
// {
//     int res;
//     res=!(100 == 100);
//      // ! (1) => 0
//      printf("\n  res=!(100 == 100); res= %d", res);//0

//      res= !(0);
//     printf("\n   res= !(0) res= %d", res);//1


// }
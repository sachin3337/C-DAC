#include<stdio.h>

int main()
{
    int arr[3][3]={10,20,30, 11,22,33, 666,777,888};
       //       row[0]     row[1]       row[2]
    //outreAdress => nameOfArray + rowIndex;
    printf("\n row 0 outer adress =%u" ,arr+0); //100
    /*
        Outer add pointerarithmetic
        =outer add+n*(scale factor* NO. of col)
        =arr+ 0 (4 * 3)
        =100+0
        =100
    */ 
    //Inner address => derefer an outer address
    printf("\n Inner Aaddress of row 0 => %u ", *(arr+0));//100 //Inner Aaddress of row 0
    // element value => derefer the inner address
    printf("\n element value of row 0 col 0=> %u \n", *(*(arr+0)+0));//10 //element value of row 0 col 0
   
    
    //outreAdress => nameOfArray + rowIndex;
    printf("\n row 1 outer adress =%u" ,arr+1); //112 //outer adress
      //Inner address => derefer an outer address
    printf("\n Inner Aaddress of row 1 => %u ", *(arr+1));//112 //Inner Aaddress of row 1
    printf("\n element value of row 1 col 0=> %u \n", *(*(arr+1)+0));//11 //element value of row 0 col 0
  
     /*
        Outer add pointerarithmetic
        =outer add+n*(scale factor* NO. of col)
        =arr+ 1 *(4 * 3)
        =100+1 * 12
        =112
    */ 
      //outreAdress of row 2 => nameOfArray + rowIndex;
     printf("\n row 2 outer adress =%u" ,arr+2); //124
     /*
        Outer add pointerarithmetic
        arr+2
        =outer add+n*(scale factor* NO. of col)
        =arr+ 2 *(4 * 3)
        =100+2* 12
        =124
    */ 
        //Inner address => derefer an outer address
    printf("\n Inner Aaddress of row 2 => %u", *(arr+2));//124 //Inner Aaddress of row 2
    printf("\n element value of row 2 col 0=> %u \n", *(*(arr+2)+0));//66 //element value of row 2 col 0
  
}
    
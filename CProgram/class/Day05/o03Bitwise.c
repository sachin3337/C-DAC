#include<stdio.h>


//bitwise AND (&)

int main()
{
    int res;

    res= 10 & 5;
    /*
        How to perform the bit wise operation
         res= 10 & 5;
        step1:- convert the give input int to binary
                10 bin=> 0000 1010
                                 
                5 bin=>  0000 0101 
                -----------------------


        step2:- now perform the given bitwise operation on to 
        the bits of given input by following the truth table
                10 bin=> 0000 1010
                                 
                5 bin=>  0000 0101 
                -----------------------
                         0000 0000 => 0 dec

    */
    printf("res= %d", res);//0


}


// #include<stdio.h>


// //bitwise OR (|)

// int main()
// {

//     int  res;
//     res=10| 5;
//     printf("res= %d", res);//15
// }


// #include<stdio.h>

// //logical operator
// //bitwise XOR (^)

// int main()
// {
//     int  res;
//     res=10 ^ 13;
//     printf("res= %d", res);//7
// }




#include<stdio.h>


//bitwise NOT (~)

int main()
{
    int res= ~(10);

    printf("\n  int res= ~(10) => %d", res);
    /*
        How to perform the bit wise operation
         int res= ~(10);
        step1:- convert the give input int to binary
                10 bin => 0000 1010

        step2:- now perform the given bitwise operation on to 
        the bits of given input by following the truth table
            10 bin => 0000 1010
                     ~       
                     -------------      
                      1111 0101
        Note:- since the MSB of output of step2 is 1 the value is "-ve" value and when we get the
        "-ve" output of step 2 we need to follow the step3 but if MSB of output of step2 is 0 that is
        the value is "+ve" and we need not to follow step 3. 
        step3:- we need to take the 2's complement of output of step2

                //How to find out  the 2's complement
                a. take 1's complement(invert the input)
                     1111 0101
                     0000 1010 => 1's complement of output of step2

                b. add 1 into the output of step a. 
                    0000 1010
                            1
                    ------------
                    0000 1011 => -11 dec

    */

}




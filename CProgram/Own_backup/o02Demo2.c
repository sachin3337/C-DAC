#include <stdio.h>

void main (){
    int rollNo = 45; // 4 byte
    char sec = 'A'; // 1 byte
    double per = 95.23; // 8 byte
    float avgs = 45.25f; // sama like double but rang is less -->(it take 4 byte)

//     | Type     | Approx. Decimal Precision |
//     | -------- | ------------------------- |
//     | `float`  | **6–7 digits**            |
//     | `double` | **15–16 digits**          |


    // \n escape sequece
    printf("%d \n", rollNo );
    printf("%c \n", sec);
    printf("%lf \n", per );


    // format spacifires --> use to print it
    // char --> %c
    // int --> %d
    // float --> %f
    // string -->%s
    // long --> ld
    // double -->lf

    // memory size in byte
    int num1 = 10;
    int sizeOfInt = sizeof(num1);
    printf("size of num1 is = %d \n", sizeOfInt);


    char ch = 'D';
    int sizeOfChar = sizeof(ch);
    printf("size of ch is = %d \n", sizeOfChar);

    
    double avg = 45.02;
    int sizeOfDouble = sizeof(avg); // storing size of double
    printf("size of ch is = %d \n", sizeOfDouble);


    // character
    int zeof = sizeof('A'); // it it not considered as char it accept as ascii value
    printf("%d \n", zeof);// output is 4 because its ascii value is 65 in int 


    // Type  casting 
    float a = 5.75;
    int b = (int)a;  // float → int (b becomes 5)
    printf("%d \n", b);
    int sizs = sizeof(b);
    printf("size of b is %d \n", sizs);

    // casting
    printf("%d", 12 + 120.25); // 12 is int and 120.25 id double so it is convert into double because it is big in byte


}
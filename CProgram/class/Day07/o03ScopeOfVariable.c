#include<stdio.h>
//storage classes

// register int n1; // not ok // global declaration of register storage class 
// variable is not allowed 
int num3;    // storage class => global 
             // storage=> data section
             // default value => zero (0)
             // life span => program level
             // scope => program level
static int num4; //storage class => static 
             // storage=> data section
             // default value => zero (0)
             // life span => program level
             // scope => limited

void hi()
{
    extern  int n1; //declaration 
                //storage class => global 
             // storage=> data section
             // default value => zero (0)
             // life span => program level
             // scope => program level
    static int num5; //storage class => static 
             // storage=> data section
             // default value => zero (0)
             // life span => program level
             // scope => limited
    printf("\n n1=%d", n1); //10
    printf("\n num4 in hi()=> %d", num4); //0
    printf("\n num5 in hi()=> %d", num5); //0
}
int n1=10; // Initialization of n1
int main()
{
    int num1; //storage class => local / auto
                // storage=> stack section
             // default value => garbage
             // life span => block level
             // scope => block 
    printf("\n num1=%d", num1); 

    auto int num2 ;  //storage class => local / auto
                // storage=> stack section
             // default value => garbage
             // life span => block level
             // scope => block  level

    register int reg; //storage class => register
            // storage=> req approved CPU register       req denied stack section
             // default value => garbage
             // life span => block level
             // scope => block  level
    printf("\n reg=%d", reg);//garbage value
    // printf("\n address of reg=%u", &reg);//not ok as we can not access an address of register 
    //storage class var
    printf("\n global var num3=%d", num3);
    hi();
     printf("\n num4 in main()=> %d", num4); //0
    //printf("\n num5 in main()=> %d", num5); //not ok
    printf("\n n1=%d", n1);//10 //ok as it is declared int hi() as extern / global
}
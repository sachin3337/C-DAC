#include<stdio.h>
#pragma pack(1)

//pass by address
struct student
{
    //body of struct
    //elements or members of structure
    int rollNo; //4 //element of struct student
    char sec; //1 //element of struct student
    double per; // 8 //element of struct student
};//end of struct student

void display( struct student std1 ) //pass by value
{
        printf("\n ===== Student's Info ====== \n");
        printf("\n rollNo=%d", std1.rollNo );
        printf("\n sec=%c", std1.sec );
        printf("\n per=%.2lf", std1.per );
}

void accept(struct student * ptr)//100 // pass by address (ptr is pointer to the structure)
{
        printf("\n Entert the sec =");
        scanf("%c", &ptr->sec);
        printf("\n Entert the Rollno =");
        scanf("%d", &ptr->rollNo);
        printf("\n Entert the per =");
        scanf("%lf", &ptr->per);
}
int main()
{ 
        struct student std1; // variable of struct student
        //Q. Write the function accept to accept the students info ?
        accept(&std1); // pass by address
        // Q. Write the function to print an info of student ?
        display(std1); // pass by value
}
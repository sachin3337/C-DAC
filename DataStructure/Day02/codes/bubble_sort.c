#include<stdio.h>
#define SIZE 6
void bubble_sort(int arr[SIZE]);
void display(int arr[SIZE]);
void efficient_bubble_sort(int arr[SIZE]);


int main()
{
   // int arr[SIZE] = {30,20,60,50,10,40};
  
   int arr[SIZE] = {11,22,33,44,55,66};
    printf("Before Normal Sort :\n");
    display(arr);
    bubble_sort(arr);
    printf("\n\nAfter Normal Sort :\n");
    display(arr);
     printf("\n\nAfter efficient sort :\n");
    efficient_bubble_sort(arr);
   
    display(arr);


    return 0;
}

void bubble_sort(int arr[SIZE])
{
    int iterations = 0, comp = 0;
        
        for(int it = 1; it < SIZE; it++) // it-> 1 -->2
        {
            iterations++;
            for(int pos = 0; pos < SIZE-it ;pos++)  // pos < 6-1(4th) : pos < 6-2(3rd)
            {
                comp++;
                if(arr[pos] > arr[pos+1])
                {
                    int temp = arr[pos];
                    arr[pos] = arr[pos+1];
                    arr[pos+1] = temp;
                }
            }
        }
        printf("\n\niterations = %d  comparisons = %d\n",iterations,comp);
}


void efficient_bubble_sort(int arr[SIZE])
{
    int iterations = 0, comp = 0,flag;
        
        for(int it = 1; it < SIZE; it++) // it-> 1 -->2
        {
            iterations++;
            flag = 0;
            for(int pos = 0; pos < SIZE-it ;pos++)  // pos < 6-1(4th) : pos < 6-2(3rd)
            {
                comp++;
                if(arr[pos] > arr[pos+1])
                {
                    int temp = arr[pos];
                    arr[pos] = arr[pos+1];
                    arr[pos+1] = temp;
                    flag = 1;
                }
            }
            if(flag == 0)
                break;
        }
        printf("\n\niterations = %d  comparisons = %d\n",iterations,comp);
}





void display(int arr[SIZE])
{
    for(int i =0; i<SIZE; i++)
        printf("%4d",arr[i]);
}
#include<stdio.h>
#define SIZE 6

void selection_sort(int arr[SIZE]);
void display(int arr[SIZE]);

int main()
{
    int arr[SIZE] = {30,20,60,50,10,40};
    printf("\n Before Sort :\n");
    display(arr);
    selection_sort(arr);
    printf("\n\n After Sort :\n");
    display(arr);

    return 0;
}

void selection_sort(int arr[SIZE])
{
    int sel_pos,pos;

    for(sel_pos = 0; sel_pos < SIZE-1; sel_pos++)
    {
        for(pos = sel_pos+1; pos < SIZE; pos++)
        {
            if(arr[sel_pos] > arr[pos])
            {
                int temp = arr[sel_pos];
                arr[sel_pos] = arr[pos];
                arr[pos] = temp;
            }
        }
    }
}

void display(int arr[SIZE])
{
    for(int i = 0; i<SIZE; i++)
        printf("%4d",arr[i]);
}
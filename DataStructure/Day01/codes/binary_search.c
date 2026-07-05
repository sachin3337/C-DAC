#include<stdio.h>
#define SIZE 9

int binary_search(int arr[SIZE],int key);

int main()
{
    int arr[SIZE] = {11,22,33,44,55,66,77,88,99};
    int key;
    printf("Enter the key to search :");
    scanf("%d",&key);

    int index = binary_search(arr,key);
    if(index == -1)
        printf("Key not Found.\n");
    else
        printf("Key found at index %d\n",index);
    return 0;
}

int binary_search(int arr[SIZE],int key)
{
    int left = 0, right = SIZE-1, mid;
    while(left <= right)
    {
        mid = (left + right) / 2; // index : 4
        if(key == arr[mid])
        {
            return mid; // return the index
        }
        if(key < arr[mid])
        {
            // search in left sub array
            right = mid-1; // index --> 0 to 3
        }
        else 
        {
            // search in right sub array
            left = mid + 1; // index : 5 to 8
        }
    }
    return -1; // key not found
}
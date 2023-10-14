/*Write a C program to copy all elements from an array to another array.*/

#include<stdio.h>

int main()
{
    int n;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int arr[n], copy_arr[n];
    printf("Input the values: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        copy_arr[i]= arr[i];
    }
    printf("Values of second array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", copy_arr[i]);
    }


    return 0;
}

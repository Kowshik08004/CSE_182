/*Write a C program to find the reverse of an array.*/

#include<stdio.h>

int main()
{
    int n;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int arr[n], rev_arr[n];
    printf("Input the values: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        rev_arr[i]= arr[n-i-1];
    }
    printf("Values of reverse array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", rev_arr[i]);
    }


    return 0;
}

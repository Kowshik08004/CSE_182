/*Write a C program to print all negative elements in an array*/

#include <stdio.h>

int main()
{
    int n;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input the values: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Negative elements in this array: ");
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

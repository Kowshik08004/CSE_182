/*Write a C Program to find the sum of n numbers using array.*/

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Input the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input the values: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Sum = %d", sum);
    return 0;
}

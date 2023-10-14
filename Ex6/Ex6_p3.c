/*Write a C program to count the total number of even and odd elements in an array.*/

#include <stdio.h>

int main()
{
    int n, even=0, odd=0;
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
        if (arr[i] %2== 0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even = %d\nOdd = %d", even, odd);

    return 0;
}

#include <stdio.h>

int main()
{
    int year;

    printf("Enter any year: ");
    scanf("%d", &year);

    (year%4==0 && year%100!=0) ? printf("LEAP YEAR\n") :
    (year%400 ==0 ) ? printf("LEAP YEAR\n") :
     printf("NOT A LEAP YEAR\n");

    return 0;
}

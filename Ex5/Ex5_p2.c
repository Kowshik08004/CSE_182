/**
 * C program to find HCF of two numbers
 */

#include <stdio.h>

int main()
{
    int i, num1, num2, min, GCD=1;

    /* Input two numbers from user */
    printf("Enter any two numbers to find GCD: ");
    scanf("%d%d", &num1, &num2);

    /* Find minimum between two numbers */
    min = (num1<num2) ? num1 : num2;

    for(i=1; i<=min; i++)
    {
        /* If i is factor of both number */
        if(num1%i==0 && num2%i==0)
        {
            GCD = i;
        }
    }

    printf("GCD of %d and %d = %d\n", num1, num2, GCD);

    return 0;
}

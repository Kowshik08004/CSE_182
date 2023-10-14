#include <stdio.h>

int main()
{
    char op;
    float first, second;

    printf("Enter an operator(+,-,*,/): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%f%f", &first, &second);

    /* Switch the value and perform action based on operator*/
    switch(op)
    {
        case '+':
            printf("%f + %f = %f", first, second, first+second);
            break;

        case '-':
            printf("%f - %f = %f", first, second, first-second);
            break;

        case '*':
            printf("%f * %f = %f", first, second, first*second);
            break;

        case '/':
            printf("%f / %f = %f", first, second, first/second);
            break;

        default:
            printf("Error!");
    }
    return 0;
}

#include <stdio.h>

int main()
{
    printf("All even numbers from 1 to 100 are: \n");

    int i=1;
    while(i<=100)
    {
        if(i%2==0)
        {
            printf("%d ", i);
        }

        i++;
    }

    return 0;
}

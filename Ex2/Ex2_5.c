#include <stdio.h>

int main()
{
    float cm, meter, km;

    printf("Enter length in centimeter: ");
    scanf("%f", &cm);

    meter = cm / 100;
    km    = cm / 100000;

    printf("Length in Meter = %f m \n", meter);
    printf("Length in Kilometer = %f km\n", km);

    return 0;
}
#include <stdio.h>

int main()
{
    float radius, diameter, circumference, area;
    
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    circumference = 2 * 3.14 * radius;
    area = 3.14 * (radius * radius);

    printf("Diameter = %f\nCircumference = %f\nArea = %f\n", diameter,circumference,area);

    return 0;
}
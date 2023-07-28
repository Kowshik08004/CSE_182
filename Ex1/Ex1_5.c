# include<stdio.h>
# include<math.h>

main(){
    int a,b,c,p;
    float s,area;

    a = 8;
    b = 7;
    c = 9;

    p = (a+b+c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Perimeter = %d and Area = %f",p,area);
}

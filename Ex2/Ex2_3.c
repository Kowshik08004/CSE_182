# include<stdio.h>

int main() {
 
    int a,b,p,area;

    printf("Enter the length and breadth of the rectangle:\n");
    scanf("%d%d", &a,&b);

    p = 2*(a+b);
    area = a*b;

    printf("Perimeter = %d\nArea = %d\n",p,area);

    return 0;
}
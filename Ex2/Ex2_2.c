# include<stdio.h>

void main() {

    int a,b,max;

    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);

    max = (a>b)? printf("Max = %d\n",a) :
        printf("Max = %d\n",b);

}

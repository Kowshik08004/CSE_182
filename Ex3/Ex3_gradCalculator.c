#include<stdio.h>

int main( )
{
    int marks;

    printf("Enter your marks: ");
    scanf("%d",&marks);

    if (marks>=80 && marks <=100)
      {
         printf("Result: A+ ");
      }
    else if (marks>=75 && marks<=79)
      {
         printf("Result: A");
      }
    else if (marks>=70 && marks<=74)
      {
         printf("Result: A-");
      }
    else if (marks>=65 && marks<=69)
      {
         printf("Result: B+");
      }
    else if (marks>=60 && marks<=64)
      {
         printf("Result: B");
      }
    else if (marks>=55 && marks<=59)
      {
         printf("Result: B-");
      }
    else if (marks>=50 && marks<=54)
      {
         printf("Result: C+");
      }
    else if (marks>=45 && marks<=49)
      {
         printf("Result: C");
      }
    else if (marks>=40 && marks<=44)
      {
         printf("Result: D");
      }
    else if (marks<40)
      {
         printf("Result: F");
      }
    else
    {
       printf("INVALID MARKS");
    }
    return 0;
}


// Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>
int area(int);
int main()
{
   int red;
   float A;
   printf("enter the redious");
   scanf("%d",&red);
   A=area(red);
   printf("area is %f",A);
    return 0;
}
int area(int x)
{
float a;
a=3.14*(x*x);
return a;
}

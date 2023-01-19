
/* Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)*/

#include<stdio.h>
int check(int);
int main()
{
   int n,x;
   
   printf("enter a number");
   scanf("%d",&n);
   x=check(n);
   x?printf("the given no is even"):printf("the given no is odd\n");
    return 0;
}
int check(int a)
{
float b;
if(a%2)
b=0;
else
b=1;
return b;
}

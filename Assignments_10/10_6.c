
//Write a function to calculate the factorial of a number. (TSRS)

#include<stdio.h>
int factorial(int);
int main()
{
   int n,fac;
   
   printf("enter a number");
   scanf("%d",&n);
   fac=factorial(n);
   printf("%d",fac);
}
int factorial(int a)
{
int i,x=1;
for(i=1;i<=a;i++)
{x=x*i;}
return x;

}


//2. Write a recursive function to calculate sum of first N even natural numbers

#include<stdio.h>
int evensum(int);
int evensum(int x)
{
   if(x==0)
   return 0;
   return (2*x)+evensum(x-1);

}
int main()
{
    int x;
    printf("enter a no\n");
    scanf("%d",&x);
    printf("sum of first %d odd natural no. is %d",x,evensum(x));
    return 0;
}

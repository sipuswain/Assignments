
//1. Write a recursive function to calculate sum of first N natural numbers

#include<stdio.h>
int sum(int);
int sum(int x)
{
   if(x==1)
   return 1;
   return x+sum(x-1);

}
int main()
{
    int x;
    printf("enter a no\n");
    scanf("%d",&x);
    printf("sum of first %d no. is %d",x,sum(x));
    return 0;
}

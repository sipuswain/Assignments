
//2. Write a recursive function to calculate sum of first N odd natural numbers

#include<stdio.h>
int oddsum(int);
int oddsum(int x)
{
   if(x==1)
   return 1;
   return (2*x-1)+oddsum(x-1);

}
int main()
{
    int x;
    printf("enter a no\n");
    scanf("%d",&x);
    printf("sum of first %d odd natural no. is %d",x,oddsum(x));
    return 0;
}

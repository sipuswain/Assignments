
//5. Write a recursive function to calculate sum of digits of a given number

#include<stdio.h>
int digitssum(int);
int digitssum(int x)
{
   if(x/10==0)
   return x%10;
   return x%10+digitssum(x/10);

}
int main()
{
    int x;
    printf("enter a no\n");
    scanf("%d",&x);
    printf("sum of digits of no. %d is %d",x,digitssum(x));
    return 0;
}

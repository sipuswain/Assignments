
//6. Write a recursive function to calculate factorial of a given number

#include<stdio.h>
int fact(int);
int fact(int x)
{
   if(x==0||x==1)
   return 1;
   return x*fact(x-1);

}
int main()
{
    int x;
    printf("enter a no\n");
    scanf("%d",&x);
    printf("factorial of no. %d is %d",x,fact(x));
    return 0;
}

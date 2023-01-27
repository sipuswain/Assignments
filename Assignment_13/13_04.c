
//4. Write a recursive function to calculate sum of squares of first n natural numbers

#include<stdio.h>
int squaresum(int);
int squaresum(int x)
{
   if(x==1)
   return 1;
   return (x*x)+squaresum(x-1);

}
int main()
{
    int x;
    printf("enter a no\n");
    scanf("%d",&x);
    printf("sum of square of first %d  natural no. is %d",x,squaresum(x));
    return 0;
}

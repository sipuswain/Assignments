
//10. Write a program in C to calculate the power of any number using recursion.

#include<stdio.h>
int power(int,int);
int power(int n,int p)
{
  if(p==1)
  return n;
  return n*power(n,(p-1));
}
int main()
{  int n,p;
    printf("enter a no and its power\n");
    scanf("%d%d",&n,&p);
    printf(" ans: %d",power(n,p));
    return 0;
}

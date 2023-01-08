
// 15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
int main()
{
  int n;
  printf("enter a no.\n");
  scanf("%d",&n);
  if(n>0)
  printf("positive\n");
  if(n==0)
  printf("Zero\n");
  if(n<0)
  printf("nagetive\n");
    return 0;
}

#include<stdio.h>
//to calculate diggit in a given no.
int main()
{
   int a,b=0,n;
   printf("enter a no");
   scanf("%d",&a);
   while(a!=0)
  { a=a/10;
  
   b++;
  }
   printf("no of digit is %d",b);
   return 0;
}
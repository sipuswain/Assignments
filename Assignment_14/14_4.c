
// to find the gretest no in the arry.

#include<stdio.h>

int main()
{
   int a[10],i,gretest=0;
   
   for(i=0;i<10;i++)
   {
       scanf("%d",&a[i]);
       if(a[i]>gretest)
       gretest=a[i];
      
   }
   printf("gretest no is %d",gretest);
}

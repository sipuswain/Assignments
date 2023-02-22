
// to find the gretest no in the arry.

#include<stdio.h>

int main()
{
   int a[10],i,smalest;
   
   for(i=0;i<10;i++)
   {
       scanf("%d",&a[i]);
        smalest=a[0];}
        
        for(i=0;i<10;i++)
       {if(a[i]<smalest)
       smalest=a[i];
      
   }
   printf("smalest no is %d",smalest);
}

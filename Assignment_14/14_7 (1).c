
// finding second large no.

#include<stdio.h>

int main()
{
   int a[10];
   int i,larg=0,secondlarg=0;
   for(i=0;i<10;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<10;i++)
   {
       if(a[i]>larg)
       {
           secondlarg=larg;
           larg=a[i];
       }
       else{
       if(a[i]>secondlarg)
       {
           secondlarg=a[i];
       }}
   }
   printf("second large is %d",secondlarg);
   
}

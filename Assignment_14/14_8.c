
// finding second small no.

#include<stdio.h>

int main()
{
   int a[10];
   int i,small=0,secondsmall=0;
   for(i=0;i<10;i++)
   {
       scanf("%d",&a[i]);
       
   }
   small=a[0];
       secondsmall=a[0];
   for(i=0;i<10;i++)
   {
       if(a[i]<small)
       {
           secondsmall=small;
           small=a[i];
       }
       else{
       if(a[i]>secondsmall)
       {
           secondsmall=a[i];
       }}
   }
   printf("second small is %d",secondsmall);
   
}


// shorting of element

#include<stdio.h>

int main()
{
   int a[10];
   int i,j,k;
   for(i=0;i<10;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<9;i++)
   {
       for(j=0;j<10;j++)
       {
           if(a[i]>a[j])
           {
               j=a[i];
               a[i]=a[j];
               a[j]=j;
           }
       }
   }
   for(i=0;i<10;i++)
   printf("%d ",a[i]);
}


// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

int main()
{
   int a[10],sum=0,i;
   for(i=0;i<10;i++)
   {
       scanf("%d",&a[i]);
       sum=sum+a[i];
   }
   printf("%d\n",sum);
}

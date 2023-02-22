
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

int main()
{
   int a[10],evensum=0,i,oddsum=0;
   
   for(i=0;i<10;i++)
   {
       scanf("%d",&a[i]);
       if(a[i]%2==0)
       evensum=evensum+a[i];
       else 
       oddsum=oddsum+a[i];
   }
   printf("evensum is %d\n",evensum);
   printf("oddsum is %d",oddsum);
}

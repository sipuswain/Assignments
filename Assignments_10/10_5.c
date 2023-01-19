
//Write a function to print first N odd natural numbers. (TSRN)

#include<stdio.h>
void oddnatural(int);
int main()
{
   int n;
   
   printf("enter a number");
   scanf("%d",&n);
   oddnatural(n);
   
}
void oddnatural(int a)
{
int i;
for(i=1;i<=a;i++)
if(i%2)
printf("%d ",i);

}

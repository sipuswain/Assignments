
//Write a function to print first N natural numbers (TSRN)

#include<stdio.h>
void natural(int);
int main()
{
   int n;
   
   printf("enter a number");
   scanf("%d",&n);
   natural(n);
   
}
void natural(int a)
{
int i;
for(i=1;i<=a;i++)
printf("%d ",i);

}


/*Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS)*/

#include<stdio.h>
int combination(int,int);
int main()
{
   int r,n,comb;
   
   printf("enter a number");
   scanf("%d%d",&n,&r);
   comb=combination(n,r);
   printf("%d",comb);
}
int combination(int a,int b)
{
int i,x=1,y=1,z=1,p;
for(i=1;i<=a;i++)
{x=x*i;}
for(i=1;i<=b;i++)
{y=y*i;}
for(i=1;i<=(a-b);i++)
{z=z*i;
}
p=x*y*z;
 /*printf("%d\n",x);
printf("%d\n",z);
printf("%d\n",y);
printf("%d\n",p);*/
return p;

}

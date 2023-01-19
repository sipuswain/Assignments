
// Write a function to calculate simple interest. (TSRS)

#include<stdio.h>
float intrest(int,int,int);
int main()
{
   int red,p,t,r;
   float si;
   printf("enter the principle,time & rate");
   scanf("%d%d%d",&p,&t,&r);
   si=intrest(p,t,r);
   printf("simple intrest is %f",si);
    return 0;
}
float intrest(int p,int t,int r)
{
float a;
a=(p*t*r)/100;
return a;
}

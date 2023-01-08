#include<stdio.h>
//to calculate sum squres of first n natural no.
int main()
{
    int n,a,j,s=0;
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {j=a*a;
    s=s+j;}
    printf(" sum of squre of first %d natural no is %d",n,s);
   
   
}
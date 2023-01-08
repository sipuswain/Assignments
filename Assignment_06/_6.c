#include<stdio.h>
//to calculate factorial of first n natural no.
int main()
{
    int n,a,j,s=1;
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
    s=s*a;}
    printf(" fac of first %d natural no is %d",n,s);
   
   
}
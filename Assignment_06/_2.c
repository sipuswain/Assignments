#include<stdio.h>
//to calculate sum of first n even natural no.
int main()
{
    int n,a,j,s=0;
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {j=2*a;
    s=s+j;}
    printf(" sum of first %d even no is %d",n,s);
   
   
}
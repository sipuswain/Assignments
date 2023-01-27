
// 8. Write a recursive function to print first N terms of Fibonacci series

#include<stdio.h>
int fibonic(int);
int fibonic(int n)
{
    if(n==1||n==0)
    return n;
    int N=fibonic(n-1)+fibonic(n-2);
    return N;
}
int main()
{  int n;
    printf("enter a no\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    { printf(" %d ",fibonic(i));}
    return 0;
}

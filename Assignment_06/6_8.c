
// 8. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
int main()
{
    int n,p=0,i;
    printf("enter a no\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {p=1;break;}
    }
    p?printf("not prime\n"):printf("prime\n");
    return 0;
}

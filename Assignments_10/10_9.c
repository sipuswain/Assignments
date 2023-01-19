
/*Write a function to check whether a given number contains a given digit or not.
(TSRS)*/

#include<stdio.h>
int check(int,int);
int main()
{
    int x,y,t;
    printf("enter two no.");
    scanf("%d%d",&x,&y);
    t=check(x,y);
    t?printf("yes\n"):printf("no\n");
}
int check(int a,int b)
{int c=0;
    while(a)
    {
        if(a%10==b)
        {c=1;
        break;}
        else
        a=a/10;
    }
    return c;
}
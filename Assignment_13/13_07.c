
//7. Write a recursive function to calculate HCF of two numbers

#include<stdio.h>
int hcf(int,int);
int hcf(int x,int y)
{
    if(x>y)
    {
        if(x%y==0)
        return y;
        return hcf(x%y,y);
    }
    else
    {
        if(y%x==0)
        return x;
        return hcf(y%x,x);
    }
}
int main()
{
    int x,y;
    printf("enter two no\n");
    scanf("%d%d",&x,&y);
    printf("hcf is %d",hcf(x,y));
    return 0;
}

#include<stdio.h>
int main()
{
    int a,b,c,d,x,y;
    printf("write a quadretic equ");
    scanf("%dx*x+%dx+%d",&a,&b,&c);
    x=b*b;
    y=4*a*c;
    d=x-y;
    if(d=0)
    {printf("reai & equal");}
    if(d<0)
        {printf("imaginary");}
        if(d>0)
    {printf("reai & distnict");}

return 0;
}
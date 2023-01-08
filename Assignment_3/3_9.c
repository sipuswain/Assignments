
//9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

#include<stdio.h>

int main()
{
    int a,b,c,x;
    printf("enter three no\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c)
    x=a;
    if(b>=c&&b>=a)
    x=b;
    if(c>=a&&c>=b)
    x=c;
    printf("gretest no is %d",x);
    return 0;
}

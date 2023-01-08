
//10. Write a program to reverse a given number

#include<stdio.h>
int main()
{
    int a,b=0;
    printf("enter no.\n");
    scanf("%d",&a);
    while(a)
    {
    b=b*10+a%10;
      a=a/10;
    }
    printf("reverse of a is %d",b);
    return 0;
}

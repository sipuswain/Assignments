
// 9. Write a program to calculate LCM of two numbers

#include<stdio.h>
int main()
{
    int a,b,i=1;
    printf("enter two no.\n");
    scanf("%d%d",&a,&b);
    while(i)
    {
     if(i%a==0&&i%b==0)
     {break;}
     i++;
    }
    printf("lcm of a & b is %d",i);
    return 0;
}

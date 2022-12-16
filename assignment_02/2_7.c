
// 7. Write a program to find the position of first 1 in LSB.

#include<stdio.h>

int main()
{
    int count=0,n,result;
    printf("enter a no.");
    scanf("%d",&n);
    while(n)
    {
    count++;
    result=n&1;
    if(result==1)
    {
        printf("%d",count);
        break;
    }
   n=n>>1;
    }
    
    return 0;
}

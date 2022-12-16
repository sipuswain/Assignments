
/* Write a program to check whether the given number is even or odd using a bitwise
operator.*/
#include<stdio.h>

int main()
{
    int n;
    printf("enter a no.");
    scanf("%d",&n);
    if(n&1==1)
    printf("odd ");
    else
    printf("even");
    
    
    
    return 0;
}


//5. Write a program to check whether a given number is a three-digit number or not.

#include<stdio.h>
int main()
{   int n;
    printf("enter a three digit no.\n");
    scanf("%d",&n);
    if(n>=100&&n<=999)
    printf("yes\n");
    else
    printf("no\n");
    return 0;
}

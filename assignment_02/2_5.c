
//5. Write a program to input a three-digit number and display the sum of the digits.

#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("enter a three digit no.\n");
    scanf("%d",&n);
    sum=sum+(n%10);
    n=n/10;
    sum+=(n%10)+(n/10);
    printf("sum is %d",sum);
    
   
    return 0;
}

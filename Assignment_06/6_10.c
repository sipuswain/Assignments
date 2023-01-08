
//10. Write a program to reverse a given number

#include<stdio.h>
int main()
{
    int a;
    printf("enter no.\n");
    scanf("%d",&a);
    while(a)
    {
     printf("%d",a%10);
      a=a/10;
    }
    return 0;
}

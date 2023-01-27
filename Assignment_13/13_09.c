
//9. Write a program in C to count the digits of a given number using recursion.

#include<stdio.h>
int countdigit(int);
int countdigit(int n)
{
   if(n/10==0)
   return 1;
   return 1+countdigit(n/10);
}
int main()
{  int n;
    printf("enter a no\n");
    scanf("%d",&n);
    printf("no of digit is %d",countdigit(n));
    return 0;
}

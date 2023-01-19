
/*Write a function to print all prime factors of a given number. For example, if the
number is 36 then your result should be 2, 2, 3, 3. (TSRN)*/

#include<stdio.h>
void factors(int);
int main()
{
    int x;
    printf("enter a no.");
    scanf("%d",&x);
    factors(x);
    return 0;
}
void factors(int a)
{int i;
for(i=2;a!=1;i++)
{while(a%i==0)
{a=a/i;
printf("%d ",i);}
    
 }
}
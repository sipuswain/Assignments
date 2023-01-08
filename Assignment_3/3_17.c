
/* 17. Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.*/

#include<stdio.h>
int main()
{
   int a,b,c,p=0;
   printf("enter lengths of a tringle\n");
   scanf("%d%d%d",&a,&b,&c);
   if(a+b>c);
   p=1;
   if(b+c>a)
   p=1;
   if(c+a>b)
   p=1;
   p?printf("valid\n"):printf("invalid\n");
   
    return 0;
}

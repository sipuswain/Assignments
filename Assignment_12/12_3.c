
// to print 1st n odd natural no 

#include<stdio.h>
void printn(int);
int main()
{int n;
scanf("%d",&n);
printn(n);
    printf("Welcome to Online IDE!! Happy Coding :)");
    return 0;
}
void printn(int n)
{ 
    if(n>0)
    {
      printn(n-1);
      if(n%2)
      printf("%d ",n);
      
    }
}
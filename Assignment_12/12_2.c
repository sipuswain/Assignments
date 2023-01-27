
// to print 1st n natural no in revese order

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
    {printf("%d ",n);
      printn(n-1);
      
    }
}
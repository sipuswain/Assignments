
// to print 1st n even natural no in revers order

#include<stdio.h>
void printn(int);
int main()
{int n;
scanf("%d",&n);
printn(n);
   
    return 0;
}
void printn(int n)
{ 
    if(n>0)
    {
      printn(n-1);
     printf("%d ",n*n);    
      
    }
}
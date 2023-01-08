
// to check whether a given no is prime or not.

#include<stdio.h>
int prime(int);
int main()
{
    int x,y,z;
    scanf("%d",&x);
    z=prime(x);
    if(z)
    printf("yes");
    else
    printf("no");
  
    return 0;
}
int prime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        i=0;
        break;
        
    }
   
    return i;
    
}
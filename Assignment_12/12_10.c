
//10. Write a recursive function to print reverse of a given number

#include<stdio.h>
void reverse(int);
void reverse(int x)
{
    if(x)
    {
        printf("%d",x%10);
        reverse(x/10);
    }
}
int main()
{
    int x;
    printf("enter a no\n");
    scanf("%d",&x);
    reverse(x);
    return 0;
}

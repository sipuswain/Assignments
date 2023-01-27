
//8. Write a recursive function to print binary of a given decimal number

#include<stdio.h>
void binary(int);
void binary(int x)
{
    if(x>0)
    {
        binary(x/2);
        printf("%d",x%2);
    }
}

int main()
{
    int x;
    printf("enter a no\n");
    scanf("%d",&x);
    binary(x);
    return 0;
}


//9. Write a recursive function to print octal of a given decimal number

#include<stdio.h>
void octal(int);
void octal(int x)
{
    if(x>0)
    {
        octal(x/8);
        printf("%d",x%8);
    }
}

int main()
{
    int x;
    printf("enter a no\n");
    scanf("%d",&x);
    octal(x);
    return 0;
}

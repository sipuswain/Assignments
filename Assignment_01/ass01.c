
// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

int main()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
       if(j<=i)
       printf("*");
       else
       printf(" ");
       printf("\n");
    }
    printf("\nWelcome to Online IDE!! Happy Coding :)");
    return 0;
}

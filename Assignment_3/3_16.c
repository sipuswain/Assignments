
/*16. Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.*/

#include<stdio.h>
int main()
{    char c;
int p=1;
    printf("enter a charecter.\n");
    scanf("%c",&c);
    if(c>='A'&&c<='Z')
    {printf("uppercase\n");p=0;}
    if(c>='a'&&c<='z')
    {printf("lower case\n");p=0;}
    if(c>=48&&c<=57)
    {printf("a digit\n");p=0;}
    if(p)
    printf("special symbol\n");
   
    return 0;
}

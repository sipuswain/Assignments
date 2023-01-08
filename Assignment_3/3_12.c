
/*12. Write a program to check whether a given alphabet is in uppercase or lowercase.*/

#include<stdio.h>

int main()
{
   char x;
   printf("enter a alphabet\n");
   scanf("%c",&x);
   if(x>='a'&&x<='z')
   printf("lowercase\n");
   if(x>='A'&&x<='Z')
    return 0;
}

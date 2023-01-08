
/* 18. Write a program which takes the month number as an input and display number of
days in that month*/

#include<stdio.h>
int main()
{
   int m;
   printf("enter month no.\n");
   scanf("%d",&m);
   if(m==1&&m==3&&m==5&&m==7&&m==8&m==10&&m==12)
   printf("days=31");
   if(m==4&&m==6&&m==9&&m==11)
   printf("days=30");
   if(m==2)
   printf("days=28/29");
   
    return 0;
}


/* WAP to take time as an input in below given format and convert the time format and
display the result as given below.
User Input date format – “HH:MM”
Output format – “HH hour and MM Minute”*/
#include<stdio.h>

int main()
{ int h,m;
printf("enter time");
scanf("%d:%d",&h,&m);
printf("%d hour and %d minute\n",h,m);
   
    return 0;
}

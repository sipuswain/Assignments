
/*Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.*/

#include<stdio.h>

int main()
{ int x;
printf("enter a three digit no.");
scanf("%d",&x);
printf("%d",x%100*10+(x/100));
    
    return 0;
}

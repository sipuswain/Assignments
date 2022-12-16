
/*12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
convert it into USD.*/

#include<stdio.h>

int main()
{ float x,y;
printf("enter the amount in INR");
scanf("%f",&x);
printf("USD=%.2f",x/76.23);
    
    return 0;
}

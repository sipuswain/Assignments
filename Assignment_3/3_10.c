
/*10. Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.*/

#include<stdio.h>

int main()
{
   float cost,sell,res;
   printf("enter the cost and selling price\n");
   scanf("%f%f",&cost,&sell);
   if(sell-cost>0)
   printf("profit is %.2f per\n",((sell-cost)/cost)*100);
   else
   printf("loss is %.2f per",((cost-sell)/cost)*100);
    return 0;
}

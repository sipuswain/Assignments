#include<stdio.h>
void printN(int);
int main()
{
    int n;
    scanf("%d",&n);
    printN(n);
}
void printN(int n)
{
 if(n>0)
 {
    printN(n-1);
    printf("%d\n",n);
 }

}
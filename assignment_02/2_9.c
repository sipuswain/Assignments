
//Write a program to print size of an int, a float, a char and a double type variable

#include<stdio.h>

int main()
{  int i,c,f,d;
i=sizeof(int);
c=sizeof(char);
f=sizeof(float);
d=sizeof(double);
    printf(" \nsize of int=%d",i);
    printf(" \nsize of char=%d",c);
    printf(" \nsize of float=%d",f);
    printf(" \nsize of double=%d",d);
    
    
    
    return 0;
}

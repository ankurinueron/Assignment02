#include<stdio.h>   //size of int,float,char & double
int main()
{
int m,n,o,p;
m=sizeof(int);
n=sizeof(float);
o=sizeof(char);
p=sizeof(double);
printf("The size of int is %d\nThe size of a float is %d\nThe size of char is %d\nThe size of double is %d",m,n,o,p);
return 0;
}

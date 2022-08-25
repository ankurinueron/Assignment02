#include<stdio.h>   //unit digit of a number
int main()
{
int m,n;
printf("Enter the number:");
scanf("%d",&m);
n=m%10;
printf("The unit digit of %d is %d",m,n);
return 0;
}

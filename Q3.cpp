#include<stdio.h>   //swapping of nos using third variable
int main()
{
double x,y,z;
printf("Enter the value of first number and second number:");
scanf("%lf%lf",&x,&y);
x=&y;
y=&x;
printf("The value after swapping\nFirst number:%lf\nSecond number:%lf",x,y);
return 0;
}

#include<stdio.h>   //swapping of values without using third variable
int main()
{
    int x,y;
    printf("Enter the first number and second number :");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("The values of first number is : %d and the value of second number is : %d",x,y);
    return 0;
}

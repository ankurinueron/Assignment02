#include<stdio.h>   //replacing last digit with 0
int main()
{
    int x,y,z;
    printf("Enter the number :");
    scanf("%d",&x);
    y=x%10;
    z=x-y;
    printf("The new number is : %d",z);
    return 0;

}

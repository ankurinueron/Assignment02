#include<stdio.h>   //taking number and digit and making a new number
int main()
{
    int x,y,z;
    printf("Enter the number :");
    scanf("%d",&x);
    printf("Enter the digit :");
    scanf("%d",&y);
    z=((x*10)+y);
    printf("The new number is : %d",z);
    return 0;
}

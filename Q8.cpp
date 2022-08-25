#include<stdio.h>   //even or odd with bitwise operator
int main()
{
    int x,y;
    printf("Enter a number :");
    scanf("%d",&x);
    y=x&1;
    if(y==0)
    {
        printf("It is a even number");
    }
    else
    {
        printf("It is a odd number");
    }
    return 0;
}

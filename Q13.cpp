#include<stdio.h>   //shifting digits to right side by one place of a 3 digit number
int main()
{
    int m,n,o,p;
    printf("Enter any 3 digit number :");
    scanf("%d",&m);
    n=m%10;
    m=m/10;
    p=((n*100)+m);
    printf("The new number is : %d",p);
    return 0;
}


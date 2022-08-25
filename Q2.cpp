#include<stdio.h>   //printing without last digit
int main()
{
int x,y;
printf("Enter the number : ");
scanf("%d",&x);
y=(x/10);
printf("The number without the last digit is : %d",y);
return 0;
}

#include<stdio.h>   //sum of digits of 3 digit number
int main()
{
    int x,y,z=0;
    printf("enter any 3 digit number\n");
    scanf("%d",&x);
    while(x!=0)
        {
        y=x%10;
        z=z+y;
        x=(x/10);
        if(y==3)
            {
                printf("sum is %d",z);

        }
        else
            {
            printf("Please enter a valid 3 digit number");
            break;
        }
    }

    return 0;

}

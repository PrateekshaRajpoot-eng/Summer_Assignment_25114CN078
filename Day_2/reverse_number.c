#include<stdio.h>
int main()
{
    int x,rem,sum=0;
    printf("enter a number:");
    scanf("%d",&x);
    while(x!=0)
    {
        rem=x%10;
        sum=(sum*10)+rem;
        x=x/10;
    }
    printf("Reverse number is:%d",sum);
    return 0;
}
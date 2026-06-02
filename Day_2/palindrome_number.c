#include<stdio.h>
int main()
{
    int x,y,rem,sum=0;
    printf("enter a number:");
    scanf("%d",&x);
    y=x;
    while(x!=0)
    {
        rem=x%10;
        sum=(sum*10)+rem;
        x=x/10;
    }
    if(sum==y)
    {
        printf("It is Palindrome number");
    }
    else
    {
        printf("It is not Palindrome number");
    }
    return 0;
}
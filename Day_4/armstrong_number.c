#include<stdio.h>
int main()
{
    int x,y,s=0,r;
    printf("enter a number:");
    scanf("%d",&x);
    y=x;
    while(x!=0)
    {
    r=x%10;
    s=s+(r*r*r);
    x=x/10;
    }
    if(s==y)
    {
        printf("it is armstrong number");
    }
    else
    {
        printf("it is not an armstrong number");
    }
    return 0;
}
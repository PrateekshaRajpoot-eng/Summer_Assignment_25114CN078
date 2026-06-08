#include<stdio.h>
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int num ,r;
    printf("enter a number:");
    scanf("%d",&num);
    r=fact(num);
    printf("factorial is %d",r);
    return 0;
}
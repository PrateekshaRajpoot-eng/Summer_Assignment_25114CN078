#include<stdio.h>
int fibo(int n)
{
    if (n==1)
    {
    return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        return fibo(n-1)+fibo(n-2);
    }
}
int main() 
{
    int n,r;
    printf("enter a number:");
    scanf("%d",&n);
    r=fibo(n);
    printf("fibonacci term:%d",r);
    return 0;
}
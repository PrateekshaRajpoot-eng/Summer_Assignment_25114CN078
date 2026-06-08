#include<stdio.h>
int sum_digits(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (n%10)+sum_digits(n/10);

    }
}
int main()
{
    int n,r;
    printf("enter the number:");
    scanf("%d",&n);
    r=sum_digits(n);
    printf("the sum of digits in a number is:%d",r);
    return 0;
}
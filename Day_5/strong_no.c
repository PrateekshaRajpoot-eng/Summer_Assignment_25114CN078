#include<stdio.h>
int main()
{
    int n,b,r,i,s,a=0;
    printf("enter a number:");
    scanf("%d",&n);
    b=n;
    while(n!=0)
    {
        r=n%10;
        s=1;
        for(i=1;i<=r;i++)
        {
            s=s*i;
        }
        a=a+s;
        n=n/10;
    }
    if(a==b)
    {
        printf("it is a strong number");
    }
    else
    {
        printf("it is not a strong number");
    }
    return 0;
}
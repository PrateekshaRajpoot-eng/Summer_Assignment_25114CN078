#include<stdio.h>
int main()
{
    int n,i,p=0;
    printf("enter a number:");
    scanf("%d",&n);
    while(n%2==0)
    {
        p=2;
        n=n/2;
    }
    for(i=3;i<=n;i++)
    {
        while(n%i==0)
        {
            p=i;
            n=n/i;
        }
    }
    if(n>2)
    {
        p=n;
        
    
    }
    printf("the largest prime factor of a number is:%d",p);
    return 0;

}
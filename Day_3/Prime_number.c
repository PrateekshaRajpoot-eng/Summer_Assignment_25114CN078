#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter a number:");
    scanf("%d",&x);
    for(i=2;i<x;i++)
    {
        if(x%i==0)
        {
            printf("it is not a prime number");
            break;
        }
    }
    if(i==x)
    {
        printf("it is prime no.");
    }
    return 0;
}
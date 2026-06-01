#include<stdio.h>
int main()
{
    int x,i,s=1;
    printf("enter a number:");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        s=s*i;
    }
     printf("factorial is: %d",s);
     return 0;
}
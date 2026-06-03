#include<stdio.h>
int main()
{
    int x,y,i;
    printf("Enter two number:");
    scanf("%d%d",&x,&y);
    for(i=x<y?x:y;i>0;i--)
    {
        if(x%i==0 && y%i==0)
        {
            printf("GCD of a number is:%d",i);
            break;
        }
    }
    return 0;
    }
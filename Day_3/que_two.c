#include<stdio.h>
int main()
{
    int x,y,k,i;
    printf("enter a 1st number:");
    scanf("%d",&x);
    printf("enter a 2nd number:");
    scanf("%d",&y);
    for(k=x;k<=y;k++)
    {
        for(i=2;i<k;i++)
    {
        if(k%i==0)
        {
            //printf("it is not a prime number");
            break;
        }
    }
    if(i==k)
    {
        printf("%d\n",k);
    }
    }
    return 0;
}
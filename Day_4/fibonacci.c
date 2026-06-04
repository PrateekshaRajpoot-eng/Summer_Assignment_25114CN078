#include<stdio.h>
int main()
{
    int r,i,a=-1,b=1,c;
    printf("enter a range:");
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}
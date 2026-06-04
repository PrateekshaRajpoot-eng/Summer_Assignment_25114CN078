#include<stdio.h>
int main()
{
    int r,x,y,s,a;
    printf("enter a range:");
    scanf("%d",&r);
    
    for(x=1;x<=r;x++)
    {
        y=x;
        s=0;
    while(y!=0)
    {
    a=y%10;
    s=s+(a*a*a);
    y=y/10;
    }
    if(s==x)
    {
        printf("%d\n",s);
    }
    }

    return 0;
}
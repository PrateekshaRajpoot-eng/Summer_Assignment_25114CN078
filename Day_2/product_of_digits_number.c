#include<stdio.h>
int main()
{
    int x,rem,s=1;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x!=0)
    {
        rem=x%10;
        s=s*rem;
        x=x/10;
    }
    printf("Product of digits in a number:%d",s);
    return 0;
}
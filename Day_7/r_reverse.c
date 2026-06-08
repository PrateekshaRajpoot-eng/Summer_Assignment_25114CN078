#include<stdio.h>
int reverse(int n,int rev)
{
    if(n==0)
    {
        return rev;
    }
    else
    {
        return reverse(n/10,rev*10+(n%10));
    }
}
int main()
{
    int n,r;
    printf("emter a number:");
    scanf("%d",&n);
    r=reverse(n,0);
    printf("the reverse of a number is:%d",r);
    return 0;
}
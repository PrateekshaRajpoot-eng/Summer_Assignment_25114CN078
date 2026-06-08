#include<stdio.h>
int main()
{
    int num,a[32],i=0,j;
    printf("enter a decimal number:");
    scanf("%d",&num);
    if(num==0)
    {
        printf("binary:0");
    }
    while(num!=0)
    {
        a[i]=num%2;
        num=num/2;
        i++;
    }
    printf("binary: ");
    for(j=i-1;j>=0;j--)
    {
        printf("%d",a[j]);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int n,i,a;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Multiplication table of a given number:");
    for(i=1;i<=10;i++)
    {
        a=n*i;
        printf("%d\n",a);
    }
    return 0;
}
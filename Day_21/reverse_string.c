#include<stdio.h>
int main()
{
    char a[100] ,t;
    int i,l;
    puts("Enter a string:");
    gets(a);
    l=strlen(a);
    for(i=0;i<l/2;i++)
    {
        t=a[i];
        a[i]=a[l-1-i];
        a[l-1-i]=t;
    }
    printf("reverse string is %s",a);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i, count,k,l;
    puts("Enter a string:");
    fgets(a, sizeof(a), stdin);
    l=strlen(a);
    for(i=65;i<=90;i++)
    {
        count=0;
        for(k=0;k<l;k++)
        {
            if(a[k]==i || a[k]==(i+32))
            {
                count++;
            }
            
        }
        if(count>0)
        {
         printf("%c:%d\n",i,count);
        }
    }
    
    return 0;
}
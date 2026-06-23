#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i,j,l;
    puts("enter the string:");
    fgets(a, sizeof(a), stdin);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]==' ')
        {
            for(j=i; j<l-1;j++)
            {
                a[j]=a[j+1];
            }
            l--;
            i--;
        }
    }
    printf("string without spaces: %s\n",a);
    return 0;
}
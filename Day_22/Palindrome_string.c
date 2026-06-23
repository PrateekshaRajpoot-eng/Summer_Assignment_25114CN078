#include<stdio.h>
int main()
{
    char a[100];
    int i,l;
    puts("Enter a string:");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")]='\0';
    l=strlen(a);
    for(i=0;i<l/2;i++)
    {
        if(a[i]!=a[l-1-i])
        {
            printf(" It is not Palindrome");
            break;
        }
    }
    if(i==l/2)
    {
        printf("Palindrome");
    }
    return 0;
}
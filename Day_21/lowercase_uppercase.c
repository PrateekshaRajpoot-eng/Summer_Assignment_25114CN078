#include<stdio.h>
#include<ctype.h>
int main()
{
    char a[100];
    int i=0;
    printf("Enter a string in lowercase: ");
    fgets(a,sizeof(a),stdin);
    while(a[i]!='\0')
    {
        a[i]=toupper(a[i]);
        i++;
    }
    printf("Uppercase:%s",a);
    return 0;
}
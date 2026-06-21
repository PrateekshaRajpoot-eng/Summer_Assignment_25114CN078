#include<stdio.h>
int main()
{
    char a[100];
    int i=0;
    printf("Enter a string in lowercase: ");
    fgets(a,sizeof(a),stdin);
    while(a[i]!='\0')
    {
       if(a[i]>=97 && a[i]<=122)
       {
        a[i]=a[i]-32;
       }
       i++;
    }
    printf("Uppercase:%s",a);
    return 0;
}
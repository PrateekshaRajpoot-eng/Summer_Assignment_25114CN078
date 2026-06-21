#include<stdio.h>
int main()
{
    int i;
    char a[100];
    printf("Enter a string:");
    fgets(a,sizeof(a),stdin);
    for(i=0;a[i]!='\0';i++)
    {

    }
    if(a[i-1]=='\n')
    {
        i=i-1;
    }
    printf("length of string is %d",i);
    return 0;

}
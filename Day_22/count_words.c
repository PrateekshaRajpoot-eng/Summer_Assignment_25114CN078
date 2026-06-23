#include<stdio.h>
int main()
{
    char a[1000];
    int i=0, words=1;
    puts("enter the string:");
    fgets(a, sizeof(a), stdin);
    while(a[i]!='\0')
    {
        if(a[i]==' ' && a[i+1]!=' ')
        {
            words++;
        }
        i++;
    }
    printf("number of words: %d",words);
    return 0;
}
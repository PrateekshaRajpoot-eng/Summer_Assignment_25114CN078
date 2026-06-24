#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int freq[256]={0};
    int i;
    printf("Enter a string (word limit 100):");
    fgets(a, sizeof(a), stdin);
    for(i=0;a[i]!='\0';i++)
    {
        freq[(int)a[i]]++;
    }
    char result='\0';
    for(i=0;a[i]!='\0';i++)
    {
        if(freq[(int)a[i]]==1)
        {
            result=a[i];
            break;
        }
    }
    if(result!='\0')
    {
        printf("first non-repeating character:%c\n",result);
    }
    else
    {
        printf("No non-repeating character found\n");
    }
    return 0;
}
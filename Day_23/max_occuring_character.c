#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int freq[256]={0};
    int i,l,max=0;
    char result='\0';
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        freq[(int)a[i]]++;
    }
    for(i=0;i<l;i++)
    {
        if(freq[(int)a[i]]>max)
        {
            max=freq[(int)a[i]];
            result=a[i];
        }
    }
    if(result!='\0'){
        printf("maximum occuring character:%c\n",result);
    }
    else{
        printf("no character found\n");
    }
    return 0;
}
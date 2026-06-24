#include<stdio.h>
#include<string.h>
int main()
{
    char a1[100],a2[100];
    int freq[256]={0};
    int i, l1,l2;
    printf("enter first string: ");
    fgets(a1, sizeof(a1), stdin);
    printf("enter second string: ");
    fgets(a2, sizeof(a2), stdin);
    a1[strcspn(a1,"\n")]='\0';
    a2[strcspn(a2,"\n")]='\0';

    l1=strlen(a1);
    l2=strlen(a2);

    if(l1!=l2)
    {
        printf("not an anagram:\n");
        return 0;
    }
    
    for(i=0;a1[i]!='\0';i++)
    {
        freq[(int)a1[i]]++;
    }
    for(i=0;a2[i]!='\0';i++)
    {
        freq[(int)a2[i]]--;
    }
    for(i=0;i<256;i++)
    {
        if(freq[i]!=0)
        {
            printf("Not an anagram\n");
            return 0;
        }
    }
     
    printf("Strings are anagram\n");
    return 0;
}
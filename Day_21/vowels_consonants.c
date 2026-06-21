#include<stdio.h>
int main()
{
    char a[100];
    int i=0,vowel=0,cons=0;
    printf("Enter a string:");
    fgets(a, sizeof(a),stdin);
    while(a[i]!='\0')
    {
        if((a[i]>=65 && a[i]<=90)||(a[i]>=97 && a[i]<=122))
        {
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
            {
                vowel++;
            }
            else
            {
                cons++;
            }

        }
        i++;
    }
    printf("Total vowels=%d and Total consonant=%d\n",vowel,cons);
    return 0;
}
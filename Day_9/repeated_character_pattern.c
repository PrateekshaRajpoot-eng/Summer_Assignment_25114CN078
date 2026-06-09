#include<stdio.h>
int main()
{
    int i,j;
    char p='A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf("%c",p);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        p++;
    }
    return 0;
}
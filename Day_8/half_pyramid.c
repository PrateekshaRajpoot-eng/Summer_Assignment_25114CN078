#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("enter number of rows:");
    scanf("%d",&r);
    printf("enter number of coloumn:");
    scanf("%d",&c);
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            if(j>=c-i+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
         printf("\n");
    }
    return 0;
}
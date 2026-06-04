#include<stdio.h>
int main()
{
    int t,i,a=0,b=1,c;
    printf("enter the term:");
    scanf("%d",&t);
   
        if(t==1)
        {
            printf("%d",a);
        }
        else if(t==2)
        {
            printf("%d",b);
        }
        else
        {
        for(i=3;i<=t;i++)
        {
        c=a+b;
        a=b;
        b=c;
        }
          printf("%d ",b);
        }
 
    return 0;
}
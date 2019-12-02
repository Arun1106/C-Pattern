#include<stdio.h>
#define n 6
void main()
{
    int i,j,k;
    for(i=0;i<=n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}


#include<stdio.h>
int main()
{
    int i,j,k,n;
    n=1;
    for (i=5;i>=1;i--)
    {
        for(j=1;j<i;j++)
        {
            printf("  ");
        }
        for(k=5;k>=i;k--)
        {
            printf(" *");
            n++;
        }
        printf("\n");
    }
}
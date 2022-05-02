#include<stdio.h>
int main()
{
    int i,j,k,l=1;
    for (i=1;i<10;i++)
    {
        if (i<=5)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d ",l);
                l++;
            }
            printf("\n");
        }
        else
        {
            for(k=1;k<=10-i;k++)
            {
                printf("%d ",l);
                l++;
            }
            printf("\n");
        }
    }

}
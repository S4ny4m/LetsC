#include<stdio.h>

int main()
{
    int i,j,k,l;
    for(i=1;i<=5;i++)
        {
            for(j=1;j<=i;j++)
                {
                    printf("%d",j);
                }
            for(k=9;k>(2*i);k=k-1)
            { 
                printf(" ");
            }
            for(l=i;l>=1;l--)
            { 
                if (l==5)
            {
                
            }
            else
            {
                printf("%d",l);
            }
            }
            printf("\n");
         }
    return 0;
}
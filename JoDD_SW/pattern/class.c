#include <stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                printf("%d",1);
            
            }
            else
            {
                printf("%d",0);
                // k=k+1;
            }
        }
        printf("\n");
    }
    
    // printf();
return 0;
}
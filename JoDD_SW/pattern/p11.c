#include <stdio.h>
int main ()
{
int i,j,k=1;
for (i=1;i<=5 ;i++)
{
    for(j=1;j<=i;j++){
        if (k==1){
            printf("%d ",k);
            // printf("\n");
            k=0;
        }
        else{
            printf("%d ",k);
            k=1;
            // printf("\n");
        }
    }
    printf("\n");
    printf("\n");
}
// printf();
return 0;
}
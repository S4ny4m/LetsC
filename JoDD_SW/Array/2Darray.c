#include <stdio.h>

int main()
{
    int arr[2][3]={1,2,3,4,5,6};;//2x3 array ==>two rows and threea colmns;
   
    // IT AN ALSO BE WRITTEN AS ^
    // BOTH ARE SAME THING.
    // int arr[2][3]={{1,2,3},{4,5,6}};
    //FOR PRINTING
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
     
        }
        printf("\n");
    }

    // printf();
return 0;
}
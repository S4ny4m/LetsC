#include <stdio.h>
// 3-d arary is just n no. of 2-d arr.
int main()
{
    int arr[2][2][3]= {
                        {{1, 2, 3},
                        {4, 5, 6}},

                        {{7, 8, 9},
                        {10, 11, 12}}
                        
                        }; // 2x2x3 array ==>2xtwo rows and threea colmns;

    // IT AN ALSO BE WRITTEN AS ^
    // BOTH ARE SAME THING.
    // int arr[2][2][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    // FOR PRINTING
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
    }

    // printf();
    return 0;
}
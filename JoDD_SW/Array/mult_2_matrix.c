#include <stdio.h>
int a = 0, b = 0, c = 0, d = 0; // res a*d
// void res();
// void res(int x[a][b], int y[c][d])
// {
    // int i, j, k, s = 0;
    // int r[a][d];
    // for (i = 0; i < a; i++) // travelling through x's rows
    // {
    //     for (j = 0; j < d; j++) // trav y's column
    //     {
    //         for (k = 0; k < c; k++) // c==b so using c wont affect the logicc
    //         {
    //             s += x[i][k] * y[k][j];
    //         }
    //         r[i][j] = s;
    //         s = 0;
    //     }
    // }
    // printf("The resultant matrix is :\n");
    // for (i = 0; i < a; i++)
    // {
    //     for (j = 0; j < d; j++)
    //     {
    //         printf("%d ", r[i][j]);
    //     }
    //     printf("\n");
    // }

//     printf("Great success.");
// }
int main()
{ 
    int k,s=0, i, j;
    printf("Enter rows and column of matrix 'A' :\n");
    scanf("%d %d", &a, &b);
    int x[a][b];
    printf("Enter elements of matrix 'A':\n");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
    printf("\n");
    // for (i = 0; i < a; i++)
    // {
    //     for (j = 0; j < b; j++)
    //     {
    //         printf ("%d ",   x[i][j]);
    //     }
    //     printf("\n");
    // }
    printf("Enter rows and column of matrix 'B' :\n");
    scanf("%d %d", &c, &d);
    int y[a][b];
    printf("Enter elements of matrix 'B':\n");
    for (i = 0; i < c; i++)
    {
        for (j = 0; j < d; j++)
        {
            scanf("%d", &x[i][j]);
        }
        
    }
    if (b == c)
    {
        
        int r[a][d];
        for (i = 0; i < a; i++) // travelling through x's rows
        {
            for (j = 0; j < d; j++) // trav y's column
            {
                for (k = 0; k < c; k++) // c==b so using c wont affect the logicc
                {
                    s += x[i][k] * y[k][j];
                }
                r[i][j] = s;
                s = 0;
            }
        }
        printf("The resultant matrix is :\n");
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < d; j++)
            {
                printf("%d ", r[i][j]);
            }
            printf("\n");
        }
        // 3 res(x, y);
    }
    else
    {
        printf("Enter a valid combination of matrix.\n");
        main();
    }
    return 0;
}
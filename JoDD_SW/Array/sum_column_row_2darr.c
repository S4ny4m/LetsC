#include <stdio.h>

int main()
{
    int arr[5][5], s = 0;
    int sr[5] = {0}, sc[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        printf("Enter row %d:\n", i + 1);
        for (int j = 0; j < 5; j++)

        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("You entered the following matrix:\n");
    for (int i = 0; i < 5; i++)
    {
        // printf("Row %d: ",i=1);
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
            sr[i] += arr[i][j];
            sc[j] += arr[i][j];
        }

        printf("\n");
    }
    printf("\nsum of rows is ");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", sr[i]);
    }
    printf("\nsum of columns is ");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d ", sc[i]);
    }

    return 0;
}
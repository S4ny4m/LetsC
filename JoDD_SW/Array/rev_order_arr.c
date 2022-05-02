#include <stdio.h>

int main()
{
    int arr1[9], arr2[9], j, i;
    for (i = 0; i < 9; i++)
    {
        /* code */
        printf("Enter element: \n");
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < 9; i++)
    {
        j = arr1[i];
        arr2[8 - i] = j;
    }
    for (i = 0; i < 9; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (i = 0; i < 9; i++)
    {
        printf("%d ", arr2[i]);
    }
    /*hag diya h bhaiiiii....directly v print kara skta tha
    LG with the direcet method*/
    printf("\n \n");
    for (i = 8; i >= 0; i--)
    {
        printf("%d", arr1[i]);
        // no worries  NT
    }
    return 0;
}
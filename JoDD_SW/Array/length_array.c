#include <stdio.h>

int main()
{   int n;
    printf("Enter number: \n");
    scanf("%d", &n);
    int arr[n];

    printf("size of array = %d", sizeof(arr) / sizeof(arr[0]));
    printf("\nEnter elements of the array:\n");
    for(int i=0;i<n;i++)
    {   
        scanf("%d",&arr[i]);
    }
    
    // arr[0] = 2;
    // arr[1] = 3;
    printf("size of array = %d", sizeof(arr) / sizeof(arr[0]));
    // printf("%d ", arr[0]);
    // printf("%d ", arr[1]);

    return 0;
}
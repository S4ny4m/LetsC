#include <stdio.h>
//1-d array
int main()
{
    int arr[8] = {0,3,4};
    printf("size of array = %d", sizeof(arr) / sizeof(arr[0]));
    printf("\n");
    arr[0] = 2;
    arr[1] = 3;
    printf("%d ", arr[0]);
    printf("%d ", arr[1]);

    return 0;
}
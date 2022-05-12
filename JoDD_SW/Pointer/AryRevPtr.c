#include <stdio.h>
/*here we will print a series of number in
reverse order using pointer.*/

int main()  
{
    int n;
    printf("Enter the number of Inputs:\n");
    scanf("%d", &n);
    int a[n], i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int *ptr = a;
    for (i = n - 1; i >= 0; i--)
        printf("%d ", *(ptr + i));
    return 0;
}
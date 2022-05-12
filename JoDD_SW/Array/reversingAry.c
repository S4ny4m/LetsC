#include <stdio.h>

int main()
{
    int n;

    printf("Enter n :\n");
    scanf("%d", &n);
    int temp, i, a[n];
    printf("Enter Elements :\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    

        for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

    for (i = 0; i < n; i++)
        printf("%d", a[i]);
    return 0;
}
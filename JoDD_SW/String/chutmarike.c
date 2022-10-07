#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i, j, a[n], temp, rot, t2, b[n];
    scanf("%d", &rot);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        if (i + rot < n)
            b[i + rot] = a[i];
        else
            b[i + rot -n] = a[i];
    }
    for (i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}
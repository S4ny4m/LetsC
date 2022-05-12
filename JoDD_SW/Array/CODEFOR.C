#include <stdio.h>
int main()
{
    int a[5][5], ans = 0, i, j, found=0;
    for (i = 0; i < 5; i++)
    {           

        for (j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {
                found = 1;
                break;
            }
        }
        if (found == 1)
            break;
    }

    if (i > 2)
    {
        ans = i - 2;
    }
    if (i < 2)
    {
        ans = 2 - i;
    }

    if (j > 2)
    {
        ans += (j - 2);
    }
    if (j < 2)
    {
        ans += (2 - j);
    }

    printf("%d", ans);
    return 0;
}
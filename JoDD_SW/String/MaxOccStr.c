#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, max, md;
    char m, c[100];
    scanf("%[^\n]s", c);
    for (i = 0; i < strlen(c); i++)
    {
        max=0;
        for (j = 0; j < strlen(c); j++)
        {
            if (c[i] == c[j])
            {
                max++;
            }
        }
        if (max > md)
        {
            md = max;
            m = c[i];
        }
    }
    printf("\n%c\n", m);
    return 0;
}
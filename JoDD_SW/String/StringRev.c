#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, x = 0, y = 0;
    // scanf("%d", &n);
    fflush(stdin);
    char a[100];
    char b[100][100];
    scanf("%[^\n]s", a);
    // fgets(a,100,stdin);

    int l = strlen(a);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ' || a[i] == '\n')
        {
            b[x][y] = '\0';
            x++;
            y = 0;
        }
        else
        {
            b[x][y++] = a[i];
        }
    }
    for (i = x; i >= 0; i--)
    {
        // for (int j=0;b[x][j]='\0';j++)
        j = strlen(b[i]);
        for (--j; j >= 0; j--)
        {
            printf("%c", b[i][j]);
        }
        printf(" ");
    }

    return 0;
}
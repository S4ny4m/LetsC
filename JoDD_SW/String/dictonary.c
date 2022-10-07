#include <stdio.h>
#include<string.h>
int main()
{
    int i,n=3;
    char m[100][100];
    for(i=0;i<n;i++)
    {
        scanf("%[^\n]s",m[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",m[i]);
    }
return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
    char c[100], d[100];
    int i,len;
    printf("Enter the String :\n");
    fgets(c,100,stdin);
    fgets(d,100,stdin);
    printf("The given string is:\n%s%s\n", c, d);
    for (i = 0; c[i] != '\0'; i++)
        if (c[i] != d[i])
            break;
    //-_-   
    len=strlen(c);
    if(i==len)
        printf("Equal Strings.\n");
    else 
        printf("Not Equal strings.\n");
    return 0;
}
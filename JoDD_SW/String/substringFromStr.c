#include <stdio.h>

int main()
{
    char c[100];
    int i,j,len,start;
    fgets(c,100,stdin);

    printf("You gave : %s",c);
    printf("Enter substring starting index  :\n");
    scanf("%d",&start);
    printf("Enter Length of substring :\n");
    scanf("%d",&len);
    char sub[len+1];

    for (i=start,j=0;j<len;i++,j++)
        sub[j]=c[i];

    sub[j]='\0';
    
    puts(sub);
    
return 0;
}